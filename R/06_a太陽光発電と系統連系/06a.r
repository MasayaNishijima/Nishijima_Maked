#入出力の設定
file.in <- "06a.csv"
file.out <- "t-V-Light.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
default.par <- par()
mai <- par()$mai
mai[4] <- mai[1]
par(mai = mai)

plot(box[,1],box[,2],xlab="Time",ylab="Voltage[V]",ylim=c(44,48),pch=1)
box.lm1<-lm(box[,2]~box[,1],box)
abline(box.lm1)
par(new=T)

plot(box[,1],box[,3],xlab="",ylab="",ylim=c(44,48),pch=2)
box.lm2<-lm(box[,3]~box[,1],box)
abline(box.lm2)
par(new=T)

plot(box[,1],box[,4],axes = FALSE,xlab="",ylab="",pch=3)
axis(4)
mtext("Solar radiation[-]", side = 4, line = 3)
box.lm3<-lm(box[,4]~box[,1],box)
abline(box.lm3)

label<-c("Voltage at Load","Voltage at NO Load","solar radiation")
legend("bottomleft", legend=label,pch=c(1:3))

par(default.par)

dev.copy(png,file.out)
dev.off()
