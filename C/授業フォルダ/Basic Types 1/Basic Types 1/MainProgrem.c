#include<stdio.h>

#define PRINT(format,x) printf(#x " = %" #format "\n",x)

int integer = 5;
char character = '5';
char *stiring = "5";

int main(void) {
	PRINT(d,stiring);
	PRINT(d,character);
	PRINT(d, integer);

	PRINT(s,stiring);
	PRINT(c,character);
	PRINT(c, integer=53);
	
	PRINT(d, ('5' > 5));

	return 0;
}