#include<stdio.h>

int kake(int x,int y)
{
	y--;
	if(y>0)
	{
		x += kake(x, y);
	}
	return x;
}

int main(void)
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d",kake(x,y));
}