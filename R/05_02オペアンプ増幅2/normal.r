#入出力の設定
file.in <- "VsAv.csv"
file.out <- "VsAv.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab=lab[1],ylab=lab[2],ylim=c(0,1.2))

#解析
box.lm<-lm(box[,2]~box[,1],box)

#近似直線の追加
abline(box.lm)

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
