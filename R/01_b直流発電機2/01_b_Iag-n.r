#入出力の設定
file.in <- "01_b_Iag-n.csv"
file.out <- "01_b_Iag-n.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
#lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab="Iag[A]",ylab="n[per]")

#解析
#box.lm<-lm(box[,2]~box[,1],,box)

x <- box[,1]
y <- box[,2]
f <- y ~ a*x^4 + b*x^3 + c*x^2 + d*x +e
obj <- nls(f, start = c(a = 0, b= 0, c = 0, d = 0, e = 0))
df <- data.frame(x = seq(-10, 30, length = 1000))
yy <- predict(obj, df)

#近似曲線の追加
par(new = T)
plot(df$x, yy, type = "l", lwd = 2,
     xlim = range(x), ylim = range(y), xlab = "", ylab = "")

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
