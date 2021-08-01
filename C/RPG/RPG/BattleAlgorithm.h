#include<stdio.h>

int Sentou(char x[64], char y[64], char z[64],/*HP*/ int a, int b, int c,/*攻撃*/ int d, int e, int f,/*回復*/ int g, int h, int i, /*敵さんデータ*/char j[64], int k,int l)
{
	int m, n, o;
	while ((k >= 0)&&(a >= 0) && (b >= 0) && (c >= 0)) {


		printf("%sのステータス\nHitPoint:%d\tAttackPoint;%d\tHealingPoint;%d\n",x,a,d,g);//各キャラデータ+行動選択
		printf("%sのステータス\nHitPoint:%d\tAttackPoint;%d\tHealingPoint;%d\n",y,b,e,h);//各キャラデータ+行動選択
		printf("%sのステータス\nHitPoint:%d\tAttackPoint;%d\tHealingPoint;%d\n",z,c,f,i);//各キャラデータ+行動選択
		printf("%sのステータス\nHitPoint:%d\tAttackPoint;%d\n",j,k,l);//各キャラデータ+行動選択
		printf("%sの行動を選択してください\n1:攻撃\t2:回復\t3逃げる(全キャラ逃げます)\n", x);

		scanf("%d", &m);
		if (m == 1) {
			printf("攻撃するよ%sに%dダメージ残りHitPoint%d\n",j,d,k=k-d);//ダメージ表示
		}
		else if (m == 2) {
			printf("回復対象を選んでください\n1:%s\t2:%s\t3:%s\n",x,y,z);//回復対象選択
			scanf("%d", &m);
			if (m == 1) {
				a += g;
				printf("%sを%d回復現在HitPoint%d\n",x,g,a);//回復表示
			}
			else if (m == 2) {
				b += g;
				printf("%sを%d回復現在HitPoint%d\n",x,g,b);//回復表示
			}
			else if (m == 3) {
				c += g;
				printf("%sを%d回復現在HitPoint%d\n",x,g,c);//回復表示
			}
			else {
				k += g;
				printf("敵さんを回復するよ\n");//回復表示
			}

		}
		else if (m == 3) {
			return 0;
		}
		else {
			printf("選択をミスしたよこのターンは何もできないよ\n");//選択ミス
		}


		printf("%sの行動を選択してください\n1:攻撃\t2:回復\t3逃げる(全キャラ逃げます)\n", y);

		scanf("%d", &n);
		if (n == 1) {
			printf("攻撃するよ%sに%dダメージ残りHitPoint%d\n",j,e,k=k-e);//ダメージ表示
		}
		else if (n == 2) {
			printf("回復対象を選んでください\n1:%s\t2:%s\t3:%s\n",x,y,z);//回復対象選択
			scanf("%d", &n);
			if (n == 1) {
				a += h;
				printf("%sを%d回復現在HitPoint%d\n",x,h,a);//回復表示
			}
			else if (n == 2) {
				b += h;
				printf("%sを%d回復現在HitPoint%d\n",x,h,b);//回復表示
			}
			else if (n == 3) {
				c += h;
				printf("%sを%d回復現在HitPoint%d\n",x,h,c);//回復表示
			}
			else {
				k += h;
				printf("敵さんを回復するよ\n");//回復表示
			}

		}
		else if (n == 3) {
			return 0;
		}
		else {
			printf("選択をミスしたよこのターンは何もできないよ\n");//選択ミス
		}

		printf("%sの行動を選択してください\n1:攻撃\t2:回復\t3逃げる(全キャラ逃げます)\n", x);

		scanf("%d", &o);
		if (o == 1) {
			printf("攻撃するよ%sに%dダメージ残りHitPoint%d\n",j,f,k=k-f);//ダメージ表示
		}
		else if (o == 2) {
			printf("回復対象を選んでください\n1:%s\t2:%s\t3:%s\n",x,y,z);//回復対象選択
			scanf("%d", &o);
			if (o == 1) {
				a += i;
				printf("%sを%d回復現在HitPoint%d\n",x,i,a);//回復表示
			}
			else if (o == 2) {
				b += i;
				printf("%sを%d回復現在HitPoint%d\n",x,i,b);//回復表示
			}
			else if (o == 3) {
				c += i;
				printf("%sを%d回復現在HitPoint%d\n",x,i,c);//回復表示
			}
			else {
				k += i;
				printf("敵さんを回復するよ\n");//回復表示
			}

		}
		else if (o == 3) {
			return 0;
		}
		else {
			printf("選択をミスしたよこのターンは何もできないよ\n");//選択ミス
		}

		a -= l;
		b -= l;
		c -= l;
		printf("敵からの攻撃すべてのキャラに%dダメージ\n",l);//ダメージ表示



	}
	if(k<=0){
        printf("敵を倒したよ\n");
        return 1;
	}
	else{
        printf("全滅してしまった\n");
        return 2;
	}
}
