#入出力の設定
file.in <- "S-IA.csv"
file.out <- "S-IA.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab="S[%]",ylab="I_A[A]",xlim=c(40,0))
points(box[,3],box[,4],pch=2)
points(box[,5],box[,6],pch=3)
points(box[,7],box[,8],pch=4)

label<-c("r=0","r=1","r=2","r=3")
legend("bottomleft", legend=label,pch=c(1:4))

#解析
box.lm0<-lm(box[,2]~box[,1],box)
box.lm1<-lm(box[,4]~box[,3],box)
box.lm2<-lm(box[,6]~box[,5],box)
box.lm3<-lm(box[,8]~box[,7],box)

#近似直線の追加
abline(box.lm0)
abline(box.lm1)
abline(box.lm2)
abline(box.lm3)

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
