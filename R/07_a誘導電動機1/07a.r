#入出力の設定
file.in <- "4E07a.csv"
file.out <- "exit.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")

plot(box[,1],box[,2],xlab="Pm[W]",ylab="IA[A]")
lines(smooth.spline(box[,1],box[,2]))
dev.copy(png,"Pm-IA.png")
dev.off()

plot(box[,1],box[,3],xlab="Pm[W]",ylab="N[rpm]",ylim=c(0,1800))
box.lm0<-lm(box[,3]~box[,1],box)
abline(box.lm0)
dev.copy(png,"Pm-N.png")
dev.off()

plot(box[,1],box[,4],xlab="Pm[W]",ylab="S[%]")
box.lm1<-lm(box[,4]~box[,1],box)
abline(box.lm1)
dev.copy(png,"Pm-S.png")
dev.off()

plot(box[,1],box[,5],xlab="Pm[W]",ylab="PF[%]")
lines(smooth.spline(box[,1],box[,5]))
dev.copy(png,"Pm-PF.png")
dev.off()

plot(box[,1],box[,6],xlab="Pm[W]",ylab="T[N*m]")
box.lm2<-lm(box[,6]~box[,1],box)
abline(box.lm2)
dev.copy(png,"Pm-T.png")
dev.off()

plot(box[,1],box[,7],xlab="Pm[W]",ylab="n[%]")
lines(smooth.spline(box[,1],box[,7],,7))
dev.copy(png,"Pm-n_.png")
dev.off()
