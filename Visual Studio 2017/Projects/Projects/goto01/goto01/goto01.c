#include<stdio.h>

int main(void) {
	int i = 1;
p:printf("%d\n", i);
	if (i < 5) {
		i++;
		goto p;
	}
	return 0;
}