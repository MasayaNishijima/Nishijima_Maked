#入出力の設定
file.in <- "08b.csv"
file.out <- "exit.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")

plot(box[,1],box[,2],xlab="Ifm[A]",ylab="Iam[A]", xlim=c(0.9,2.65), ylim=c(0,9.5))
points(box[,3],box[,4],pch=2)
points(box[,5],box[,6],pch=3)
points(box[,7],box[,8],pch=4)
points(box[,9],box[,10],pch=5)

label<-c("0/4","1/4","2/4","3/4","4/4")
legend("bottomleft", legend=label,pch=c(1:5))

lines(spline(box[,1],box[,2],n=15))
lines(spline(box[,3],box[,4],n=15))
lines(spline(box[,5],box[,6],n=15))
lines(spline(box[,7],box[,8],n=15))
lines(spline(box[,9],box[,10],n=15))

dev.copy(png,"V.png")
dev.off()





box2<-cbind(
box[,1],100*box[,1]/(sqrt(3)*200*box[,2])*100,
box[,3],100*box[,3]/(sqrt(3)*200*box[,4])*100,
box[,5],100*box[,5]/(sqrt(3)*200*box[,6])*100,
box[,7],100*box[,7]/(sqrt(3)*200*box[,8])*100,
box[,9],100*box[,9]/(sqrt(3)*200*box[,10])*100
)

plot(box2[,1],box2[,2],xlab="Ifm[A]",ylab="cosPhi[%]", xlim=c(0.9,2.65), ylim=c(0,100),type="b")
points(box2[,3],box2[,4],pch=2,type="b")
points(box2[,5],box2[,6],pch=3,type="b")
points(box2[,7],box2[,8],pch=4,type="b")
points(box2[,9],box2[,10],pch=5,type="b")
label<-c("0/4","1/4","2/4","3/4","4/4")
legend("bottomleft", legend=label,pch=c(1:5))

if(0){
lines(spline(box2[,1],box2[,2]))
lines(spline(box2[,3],box2[,4]))
lines(spline(box2[,5],box2[,6]))
lines(spline(box2[,7],box2[,8]))
lines(spline(box2[,9],box2[,10]))
}

dev.copy(png,"Reiji.png")
dev.off()
write.csv(box2,"Reiji.csv")


box3<-cbind(
(200*box[,1]+100*box[,2])-81-28.9*box[,1]-0.6*box[,2],
(200*box[,3]+100*box[,4])-81-28.9*box[,3]-0.6*box[,4],
(200*box[,5]+100*box[,6])-81-28.9*box[,5]-0.6*box[,6],
(200*box[,7]+100*box[,8])-81-28.9*box[,7]-0.6*box[,8],
(200*box[,9]+100*box[,10])-81-28.9*box[,9]-0.6*box[,10]
)

plot(box3[,1],box2[,2],xlab="Po[W]",ylab="cosPhi[%]",type="b")
points(box3[,2],box2[,4],pch=2,type="b")
points(box3[,3],box2[,6],pch=3,type="b")
points(box3[,4],box2[,8],pch=4,type="b")
points(box3[,5],box2[,10],pch=5,type="b")

if(0){
lines(spline(box3[,1],box2[,2]))
lines(spline(box3[,2],box2[,4]))
lines(spline(box3[,3],box2[,6]))
lines(spline(box3[,4],box2[,8]))
lines(spline(box3[,5],box2[,10]))
}

label<-c("0/4","1/4","2/4","3/4","4/4")
legend("bottomleft", legend=label,pch=c(1:5))
dev.copy(png,"FukaCos.png")
dev.off()
write.csv(box3,"Po.csv")

plot(box3[,1],box[,2],xlab="Po[W]",ylab="Iam[A]",type="b")
points(box3[,2],box[,4],pch=2,type="b")
points(box3[,3],box[,6],pch=3,type="b")
points(box3[,4],box[,8],pch=4,type="b")
points(box3[,5],box[,10],pch=5,type="b")

if(0){
lines(spline(box3[,1],box[,2]))
lines(spline(box3[,2],box[,4]))
lines(spline(box3[,3],box[,6]))
lines(spline(box3[,4],box[,8]))
lines(spline(box3[,5],box[,10]))
}
label<-c("0/4","1/4","2/4","3/4","4/4")
legend("bottomleft", legend=label,pch=c(1:5))
dev.copy(png,"FukaIam.png")
dev.off()

box4<-cbind(
box3[,1]/(100*box[,1]+200*box[,2])*100,
box3[,2]/(100*box[,3]+200*box[,4])*100,
box3[,3]/(100*box[,5]+200*box[,6])*100,
box3[,4]/(100*box[,7]+200*box[,8])*100,
box3[,5]/(100*box[,9]+200*box[,10])*100
)
write.csv(box4,"n.csv")
box5<-cbind(
box3[,1]/(2*pi*1800),
box3[,2]/(2*pi*1800),
box3[,3]/(2*pi*1800),
box3[,4]/(2*pi*1800),
box3[,5]/(2*pi*1800)
)
write.csv(box5,"T.csv")

plot(box[,2],box4[,1],xlab="Iam[A]",ylab="n[%]",type="b")
points(box[,4],box4[,2],pch=2,type="b")
points(box[,6],box4[,3],pch=3,type="b")
points(box[,8],box4[,4],pch=4,type="b")
points(box[,10],box4[,5],pch=5,type="b")
label<-c("0/4","1/4","2/4","3/4","4/4")
legend("bottomleft", legend=label,pch=c(1:5))
dev.copy(png,"Iam-n.png")
dev.off()

plot(box[,2],box5[,1],xlab="Iam[A]",ylab="n[%]",type="b")
points(box[,4],box5[,2],pch=2,type="b")
points(box[,6],box5[,3],pch=3,type="b")
points(box[,8],box5[,4],pch=4,type="b")
points(box[,10],box5[,5],pch=5,type="b")
label<-c("0/4","1/4","2/4","3/4","4/4")
legend("bottomleft", legend=label,pch=c(1:5))
dev.copy(png,"Iam-T.png")
dev.off()
