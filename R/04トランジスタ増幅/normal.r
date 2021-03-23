#入出力の設定
file.in <- "04.csv"
file.out <- "04.png"

#ファイルの読み込み
box <- read.csv(file.in,header=T)

#グラフ作成
lab <- strsplit(colnames(box),"\n")
plot(box[,1],box[,2],xlab=lab[1],ylab=lab[2],log="x",type="b")


#画像出力
dev.copy(png,file.out)
dev.off()
