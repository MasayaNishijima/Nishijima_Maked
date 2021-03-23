#入出力の設定
file.in <- "IamNp.csv"
file.out <- "IamNp.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab=lab[1],ylab=lab[2],xlim = c(0,30), ylim = c(0,100))

#解析
x <- box[,1]
y <- box[,2]
f <- y ~ a*x^4 + b*x^3 + c*x^2 + d*x +e
obj <- nls(f, start = c(a = 0, b= 0, c = 0, d = 0, e = 0))
df <- data.frame(x = seq(-10, 30, length = 1000))
yy <- predict(obj, df)

#近似直線の追加
par(new = T)
plot(df$x, yy, type = "l", lwd = 2,
     xlim = c(0,30), ylim = c(0,100), xlab = "", ylab = "")

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
