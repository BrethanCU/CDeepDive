#include "../compiler.h"


void printArray(const int *arr, int n) {
	printf("functions.c: printArray(int *copy, int n);\n");

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}