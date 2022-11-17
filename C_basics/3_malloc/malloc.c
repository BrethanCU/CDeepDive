#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
	int i;
	int j;
	int k;
} vector_t;

int *heapIntArray(int numElems) {
	int *arr = (int *) malloc(sizeof(int) * numElems);
	return arr;
}

vector_t *createVector_bugged(int i, int j, int k) {
	vector_t v = (vector_t) {i, j, k};
	vector_t *vPtr = &v;
	return vPtr;
}


int main() {
	
	return 0;
}