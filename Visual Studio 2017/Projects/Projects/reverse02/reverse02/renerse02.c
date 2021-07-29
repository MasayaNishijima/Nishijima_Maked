#include<stdio.h>
#include<stdlib.h>

struct data {
	int value;
	struct data *previosu;
};

int main() {
	int input;
	struct data *d = NULL,
		*previosu = NULL,
		*shuoldFree = NULL;

		while(EOF != scanf_s("%d", &input)) {
			d = (struct data*)malloc(
				sizeof(struct data));
			d->value = input;
			d->previous = previos;
			previosu = d;
	}

	while (d != NULL) {
		printf("%d\n", d->value);
		shuoldFree = d;
		d = d->previosu;
		free(shuoldFree);
	}
	return 0;
}