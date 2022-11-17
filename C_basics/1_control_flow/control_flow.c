#include <stdio.h>

void demoIfElse() {
    int x = 10, y = 3;

    if (x > y) {
        printf("x is greater than y!");
    } else if (y > x) {
        printf("y is greater than x!");
    } else if (x == 10) {
		printf("x is 10!");
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

void demoWhile(int counter) {

	while (counter > 0) {
		printf("%d ", counter);
		counter--;
	}
}

void demoDoWhile(int counter) {

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

void demoSwitch() {
	int a = 0;
	printf("Enter a number: ");
	scanf("%d", &a);

	switch (a)
	{
	case 0:
	case 1:
	case 2:
	case 3:
		printf("This is a low number, I can easily count up to it");
		break;
	case 5:
	case 6:
		printf("This is starting to get hard...");
		break;
	case 7:
		printf("This is as high as I can count!");
		break;
	
	default:
		printf("I can't count this high!");
		break;
	}

	printf("\n");
}

int main() {
	// demoIfElse();
	demoSwitch();
	// demoFor(10);
	// demoWhile(10);
	// demoDoWhile(10);
    return 0;
}