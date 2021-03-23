#入出力の設定
file.in <- "If-Zs.csv"
file.out <- "If-Zs.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
plot(box[,1],box[,2],xlab="If[A]",ylab="Zs[ohm]",xlim=c(0,1.0),ylim=c(0,70),)
lines(spline(box[,1],box[,2]))

dev.copy(png,file.out)
dev.off()