#入出力の設定
file.in <- "r-N.csv"
file.out <- "r-N.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab="r[ohm]",ylab="N[rpm]",xlim=c(0,6),ylim=c(1200,1800))

#解析
box.lm0<-lm(box[,2]~box[,1],box)

#近似直線の追加
abline(box.lm0)

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
