#入出力の設定
file.in <- "K_TN.csv"
file.out <- "K_TN.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成解析近似直線の追加
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab=lab[1],ylab=lab[2],xlim=c(0,0.06),ylim=c(1850,2200))
box.lm<-lm(box[,2]~box[,1],box)
abline(box.lm)

par(new=T)
plot(box[,4],box[,5],xlab=lab[1],ylab=lab[2],xlim=c(0,0.06),ylim=c(1850,2200))
box.lm<-lm(box[,5]~box[,4],box)
abline(box.lm)

par(new=T)
plot(box[,7],box[,8],xlab=lab[1],ylab=lab[2],xlim=c(0,0.06),ylim=c(1850,2200))
box.lm<-lm(box[,8]~box[,7],box)
abline(box.lm)

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
