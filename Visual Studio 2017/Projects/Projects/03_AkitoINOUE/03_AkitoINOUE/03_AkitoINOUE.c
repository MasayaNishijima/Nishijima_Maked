#include <stdio.h>

int main (void)
{
	float n, a, r, p;
	while (1) {
		printf("*くらべる数を0にするとプログラム終了です\nくらべる数＝");
		scanf_s("%f", &n);
		if(n==0)break;
		printf("もとの数＝");
		scanf_s("%f", &a);


		r = n / a;
		printf("割合=%.2f\n", r);

		p = r * 100;
		printf("百分率=%.2f ％ \n\n", p);
	}

		return 0;

}
