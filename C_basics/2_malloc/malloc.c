#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
	int i;
	int j;
	int k;
} vector_t;

vector_t *createVector_bugged(int i, int j, int k) {
	vector_t v = (vector_t) {i, j, k};
	vector_t *vPtr = &v;
	return vPtr;
}

vector_t *createVector_correct(int i, int j, int k) {
	vector_t *ptr = (vector_t *) malloc(sizeof(vector_t));
	ptr->i = i;
	ptr->j = j;
	ptr->k = k;
	return ptr;
}

vector_t createVector_func(int i, int j, int k) {
	return (vector_t) {i, j, k};
}

void printVector(vector_t v, char *name) {
	printf("%s: %d, %d, %d\n", name, v.i, v.j, v.k);
}

void function_pointer_struct() {
	vector_t v = {10, 20, 30};
	vector_t v2 = createVector_func(-12, 0, -123);
	printVector(v, "Main Vector");
	printVector(v2, "Function Vector");
	vector_t *vPtr = createVector_bugged(10, 20, 30);
	printVector(*vPtr, "Bugged Vector");
	createVector_bugged(25, -12, 50);
	printVector(*vPtr, "Bugged Vector");

	vector_t *vPtr2 = createVector_correct(10, 20, 30);
	printVector(*vPtr2, "Correct Vector 1");
	vector_t *vPtr3 = createVector_correct(15, 25, 35);
	printVector(*vPtr2, "Correct Vector 1");
	printVector(*vPtr3, "Correct Vector 2");
	
	free(vPtr2);
	free(vPtr3);
}

int main() {
	function_pointer_struct();
	return 0;
}