#include "stdio.h"

int FunctionKake(int a,int b)/*Ä‹N®Š|‚¯ZŠÖ”*/
{
	b--;/*‰ñ”‚ğ’²®—p”*/
	if(b>0) /*I—¹ğŒ*/
	{
		a += FunctionKake(a, b);/*Š|‚¯ZÀ‘•‰ÓŠ*/
	}
	return a;
}

int main(void)
{
	int x, y;
	printf("Š|‚¯‚ç‚ê‚é”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &x);
	printf("‚©‚¯‚é”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &y);
	printf("“š‚¦‚Í%d‚Å‚·B\n", FunctionKake(x, y));
	for (;;)printf("\a");
}