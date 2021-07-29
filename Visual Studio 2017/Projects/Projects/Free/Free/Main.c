#include "stdio.h"

int FunctionKake(int a,int b)/*再起式掛け算関数*/
{
	b--;/*回数を調整用数*/
	if(b>0) /*終了条件*/
	{
		a += FunctionKake(a, b);/*掛け算実装箇所*/
	}
	return a;
}

int main(void)
{
	int x, y;
	printf("掛けられる数を入力してください\n");
	scanf_s("%d", &x);
	printf("かける数を入力してください\n");
	scanf_s("%d", &y);
	printf("答えは%dです。\n", FunctionKake(x, y));
	for (;;)printf("\a");
}