#include<stdio.h>

void sub(void) {
	printf("sub関数でこんにちは!\n");
}

int main(void) {
	sub();
	sub();
	return 0;
}