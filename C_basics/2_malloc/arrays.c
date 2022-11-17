#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 10

void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void copyArrayToHeap(int arr[], int *pArr, int n) {
	for (int i = 0; i < n; i++) {
		pArr[i] = arr[i];
	}
}

void copyArrayToHeapV2(int arr[], int *pArr, int n) {
	for (int i = 0; i < n; i++) {
		*(pArr + i) = arr[i];
	}
}

int main() {
	int arr[ARR_SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int *pArr = (int *) malloc(sizeof(int) * ARR_SIZE);

	copyArrayToHeapV2(arr, pArr, ARR_SIZE);

	printArray(arr, ARR_SIZE);
	printArray(pArr, ARR_SIZE);
	return 0;
}