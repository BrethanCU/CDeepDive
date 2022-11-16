#include <stdio.h>



int main() {
	int a = 1, b = 2; // a = 0b0001, b = 0b0010
	printf("%d\n", a || b);	 // a || b = (n > 0); Generally 1
	printf("%d\n", a | b);
	return 0;
}