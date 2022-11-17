#include <stdio.h>

void demoIfElse() {
    int x = 10, y = 3;

    if (x > y) {
        printf("x is greater than y!");
    } else if (y > x) {
        printf("y is greater than x!");
    } else {
        printf("x is equal to y!");
    }

    printf("\n");
}

void demoFor(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", i);
	}

	for (i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}

		printf("\n");
	}
}

void demoWhile() {
	int counter = 10;

	while (counter > 0) {
		printf("%d ", counter);
		counter--;
	}
}

void demoDoWhile() {
	int counter = 10;

	do {
		printf("Always runs at least once!\n");
	} while (counter < 0);

	printf("This one should run a couple of times: \n");

	do {
		printf("%d ", counter);
		counter--;
	}  while (counter > 0);

	printf("\n");
}


int main() {
	demoFor(10);
    return 0;
}