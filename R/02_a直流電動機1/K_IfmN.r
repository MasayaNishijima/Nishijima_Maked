#入出力の設定
file.in <- "K_IfmN.csv"
file.out <- "K_IfmN.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成解析近似直線の追加
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab=lab[1],ylab=lab[2],xlim=c(40,60),ylim=c(1850,2100))
box.lm<-lm(box[,2]~box[,1],box)
abline(box.lm)

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
