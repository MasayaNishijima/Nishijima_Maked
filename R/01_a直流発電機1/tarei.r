box <- read.csv("tarei.csv")
plot(box[,1],box[,2],type="b",pch=15,xlim=c(0,2.1),ylim=c(0,125),xlab="",ylab="")
par(new=T)
plot(box[,3],box[,4],type="b",pch=0,xlim=c(0,2.1),ylim=c(0,125),xlab="If[A]",ylab="Eog[V]")

dev.copy(png,"tarei.png")
dev.off()