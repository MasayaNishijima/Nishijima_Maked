#include <stdio.h>

void main() {

	int a;

	printf("[5]を入力してください:");
	sscanf("%d", &a);

	getchar();

	if (a == 5)
	{
		printf("○\n");
	}

	else if (a == 3)
	{
		printf("□\n");
	}

	else
	{
		printf("△\n");
	}

	getchar();
}
