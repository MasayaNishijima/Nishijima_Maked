#include"stdio.h"

/**
 * \brief 
 * \return 
 */
int main(void)
{
	float r, v;
	printf("体積を求めたい球の半径を入力してください\n");
	
	scanf_s("%d",&r);
	v = r*r*r * 4 / 3;
	printf("%f""π", v);
	return 0;


}