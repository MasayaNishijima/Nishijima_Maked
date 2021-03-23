#入出力の設定
file.in <- "2_100k.csv"
file.out <- "2_100k.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab=lab[1],ylab=lab[2],type="b",log="x",ylim=c(0,45))

#解析
#box.lm<-lm(box[3,2]~box[12,1],box)

#近似直線の追加
#abline(box.lm)

#凡例等の加算

#画像出力
dev.copy(png,file.out)
dev.off()
