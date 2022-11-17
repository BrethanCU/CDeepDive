#include <stdio.h>
#include <stdint.h>

int main() {
	char *b = "%lf";

	printf("%lu", sizeof((void *) 0));
	return 0;
}