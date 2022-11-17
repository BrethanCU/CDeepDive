#include <stdio.h>

int main() {
	// There isn't a built in string type in C

	// Literal String Initialization
	char str[] = "Hello, World!";
	char *str1 = "Hello, World! (pointer syntax)";
	printf("%s\n", str);
	printf("%s\n", str1);
	
	// String declaration
	char str2[10];
	// str2 = "string!"; - invalid, must now set array elements
	str2[0] = 's';
	str2[1] = 't';
	str2[2] = 'r';
	str2[3] = 'i';
	str2[4] = 'n';
	str2[5] = 'g';
	str2[6] = 's';
	str2[7] = '!';
	str2[8] = '\0';

	printf("%s (Array access)\n", str2);

	// Quirks
	char str3[10] = "strings!"; // '\0' automatically set at str3[8]
	printf("%s (Buffer size set)\n", str3);

	char str4[8] = "strings!"; // May have no compiler warning but no room for '\0'
	printf("%s (No room for \\0)\n", str4);
	
	char str5[7] = "strings!"; // Compiler warning - buffer overflow
	printf("%s (not enough room)\n", str5);

}