#include "stdio.h"

int FunctionKake(int a,int b)/*�ċN���|���Z�֐�*/
{
	b--;/*�񐔂𒲐��p��*/
	if(b>0) /*�I������*/
	{
		a += FunctionKake(a, b);/*�|���Z�����ӏ�*/
	}
	return a;
}

int main(void)
{
	int x, y;
	printf("�|�����鐔����͂��Ă�������\n");
	scanf_s("%d", &x);
	printf("�����鐔����͂��Ă�������\n");
	scanf_s("%d", &y);
	printf("������%d�ł��B\n", FunctionKake(x, y));
	for (;;)printf("\a");
}