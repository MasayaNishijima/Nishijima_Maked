#入出力の設定
file.in <- "09B2.2-2.3.csv"
file.out1 <- "Iin-Vout.png"
file.out2 <- "Iin-n.png"


#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
plot(box[,2],box[,4],xlab="Iin[A]",ylab="Vout[V]",xlim=c(0,1),ylim=c(0,100))
points(box[,10],box[,12],pch=2)
points(box[,18],box[,20],pch=3)

label<-c("DC100V","DC95V","DC90V")
legend("bottomleft", legend=label,pch=c(1:3))

#lines(spline(box[,2],box[,4]))
#lines(spline(box[,10],box[,12]))
#lines(spline(box[,18],box[,20]))

abline(lm(box[,4]~box[,2]))
abline(lm(box[,12]~box[,10]))
abline(lm(box[,20]~box[,18]))

dev.copy(png,file.out1)
dev.off()


boxRm1<-box[-1,]
plot(boxRm1[,2],boxRm1[,7],xlab="Iin[A]",ylab="n[%]",xlim=c(0,1),ylim=c(0,75))
points(boxRm1[,10],boxRm1[,15],pch=2)
points(boxRm1[,18],boxRm1[,23],pch=3)

label<-c("DC100V","DC95V","DC90V")
legend("bottomleft", legend=label,pch=c(1:3))


lines(spline(boxRm1[,2],boxRm1[,7]))
lines(spline(boxRm1[,10],boxRm1[,15]))
lines(spline(boxRm1[,18],boxRm1[,23]))

dev.copy(png,file.out2)
dev.off()
