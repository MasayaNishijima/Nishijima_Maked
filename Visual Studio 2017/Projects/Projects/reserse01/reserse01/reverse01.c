#include<stdio.h>

int main(void) {
	int data[3], input, index = 0;

	while (EOF != scanf_s("%d", &input))
		data[index++] = input;

	for (index--; index > -1; index--)
		printf("%d\n", data[index]);
	return 0;
}