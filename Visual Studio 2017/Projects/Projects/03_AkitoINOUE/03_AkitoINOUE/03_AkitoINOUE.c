#include <stdio.h>

int main (void)
{
	float n, a, r, p;
	while (1) {
		printf("*����ׂ鐔��0�ɂ���ƃv���O�����I���ł�\n����ׂ鐔��");
		scanf_s("%f", &n);
		if(n==0)break;
		printf("���Ƃ̐���");
		scanf_s("%f", &a);


		r = n / a;
		printf("����=%.2f\n", r);

		p = r * 100;
		printf("�S����=%.2f �� \n\n", p);
	}

		return 0;

}
