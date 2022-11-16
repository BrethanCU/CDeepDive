#include "../compiler.h"

const int data[] = {1,2,3,4,5,6,7,8,9,10};

void getDataCopy(int *copy, int n) {
	printf("data.c: getDataCopy(int *copy, int n);\n");
	n = (10 < n) ? 10 : n;

	for (int i = 0; i < n; i++) {
		copy[i] = data[i];
	}
}

void printData() {
	printf("data.c: printData();\n");
	int n = sizeof(data) / sizeof(int);
	printArray(data, n);
}