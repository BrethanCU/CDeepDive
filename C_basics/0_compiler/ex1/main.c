#include "compiler.h"
#define ARR 5

int main() {
	int arr[5];

	getDataCopy(arr, ARR);
	printf("\n");
	
	printArray(arr, ARR);
	printf("\n");	

	printData();
	printf("\n");
	
	printf("main.c: return 0;\n");
	return 0;
}
