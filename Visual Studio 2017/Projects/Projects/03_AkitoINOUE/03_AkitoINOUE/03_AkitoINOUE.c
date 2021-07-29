#include <stdio.h>

int main (void)
{
	float n, a, r, p;
	while (1) {
		printf("*‚­‚ç‚×‚é”‚ğ0‚É‚·‚é‚ÆƒvƒƒOƒ‰ƒ€I—¹‚Å‚·\n‚­‚ç‚×‚é”");
		scanf_s("%f", &n);
		if(n==0)break;
		printf("‚à‚Æ‚Ì”");
		scanf_s("%f", &a);


		r = n / a;
		printf("Š„‡=%.2f\n", r);

		p = r * 100;
		printf("•S•ª—¦=%.2f “ \n\n", p);
	}

		return 0;

}
