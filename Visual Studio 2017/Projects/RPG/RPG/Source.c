#include <stdio.h>
#include "ayaka.h"
#include "BattleAlgorithm.h"
#include "kakihara.h"
#include "kaoru.h"
#include "rina.h"
#include "wataru.h"

struct sute
{
	char name[64];
	int HitPoint;
	int AttackPoint;
	int HealingPoint;
};

int main(void)
{
	int s;
	struct sute x, y, z;
	x.HitPoint = y.HitPoint = z.HitPoint = 200;
	x.AttackPoint = y.AttackPoint = z.AttackPoint = 20;
	x.HealingPoint = y.HealingPoint = z.HealingPoint = 60;




	sorena();//スタート画面
	scanf("");

	kakihara();
	printf("1:");
	scanf("%s",&x.name);
	printf("2:");
	scanf("%s", &y.name);
	printf("3:");
	scanf("%s", &z.name);

	for(int i=0;i!=10;i++)
	{
		printf("\n");
	}
	ono();
	for (int i = 0; i != 8; i++)
	{
		printf("\n");
	}
	while (1)
	{
		for (int i = 0; i != 10; i++)
		{
			printf("\n");
		}
		ono();
		for (int i = 0; i != 8; i++)
		{
			printf("\n");
		}

		scanf("%d", &s);
		if (s == 1)
		{
			int Result;
			Result=Sentou(x.name, y.name, z.name, x.HitPoint, y.HitPoint, z.HitPoint, x.AttackPoint, y.AttackPoint, z.AttackPoint, x.HealingPoint, y.HealingPoint, z.HealingPoint, "吾輩は雑魚である", 100, 10);
			switch (Result)
			{
			case 0:
				{
					printf("逃げ出したよ\n");
					break;
				}
			case  1:
				{
				printf("ステータスが増えるよ\nHitPoint100増加 AttackPointが10増加　HealingPointが30増加だよ");
				scanf("");
				x.HitPoint += 100;
				y.HitPoint += 100;
				z.HitPoint += 100;
				x.AttackPoint += 10;
				y.AttackPoint += 10;
				z.AttackPoint += 10;
				x.HealingPoint += 30;
				y.HealingPoint += 30;
				z.HealingPoint += 30;

				break;
				}
			case 2:
			{
				ONO();
				return 0;
			}
			}
			continue;
		}
		else if (s == 2)
		{
			int Result;
			static int siten = 1;
			Result = Sentou(x.name, y.name, z.name, x.HitPoint, y.HitPoint, z.HitPoint, x.AttackPoint, y.AttackPoint, z.AttackPoint, x.HealingPoint, y.HealingPoint, z.HealingPoint, "吾輩は四天王である", 1000*siten, 100*siten);
			switch (Result)
			{
			case 0:
			{
				printf("逃げ出したよ\n");
				break;
			}
			case  1:
			{
				printf("ステータスが増えるよ\nHitPoint1000*倒した四天王数増加 AttackPointが100*倒した四天王数増加　HealingPointが300*倒した四天王数増加だよ");
				scanf("");
				x.HitPoint += 1000;
				y.HitPoint += 1000;
				z.HitPoint += 1000;
				x.AttackPoint += 100;
				y.AttackPoint += 100;
				z.AttackPoint += 100;
				x.HealingPoint += 300;
				y.HealingPoint += 300;
				z.HealingPoint += 300;
				siten++;
				break;
			}
			case 2:
			{
				ONO();
				return 0;
			}
			}
			continue;
		}
		else if (s == 3)
		{
			int Result;
			Result = Sentou(x.name, y.name, z.name, x.HitPoint, y.HitPoint, z.HitPoint, x.AttackPoint, y.AttackPoint, z.AttackPoint, x.HealingPoint, y.HealingPoint, z.HealingPoint, "吾輩は雑魚である", 10000, 1000);
			switch (Result)
			{
			case 0:
			{
				printf("逃げ出したよ\n");
				break;
			}
			case  1:
			{
				rina();

				return 0;
			}
			case 2:
			{
				ONO();
				return 0;
			}
			}
		}
		continue;
	}
}
