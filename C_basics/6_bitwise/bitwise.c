#include <stdio.h>
#include <stdlib.h>

const unsigned int x = 5, y = 2, z = 3;

void bitwiseAND() {
    // 5 & 2
    printf("0101 & 0010 = 0000 (%d)", x & y);

    // 5 & 3
    printf("0101 & 0011 = 0001 (%d)", x & z);

    // 2 & 3
    // printf("0010 & 0011 = (%d)", y & z);
}

void bitwiseOR() {
    // 5 | 2
    printf("0101 & 0010 = 0111 (%d)", x | y);

    // 5 | 3
    printf("0101 & 0011 = 0111 (%d)", x | z);

    // 2 | 3
    // printf("0010 | 0011 = (%d)", y & z);
}

void bitwiseXOR() {
    // 5 ^ 2
    printf("0101 ^ 0010 = 0000 (%d)", x ^ y);

    // 5 ^ 3
    printf("0101 ^ 0011 = 0001 (%d)", x ^ z);

    // 2 ^ 3
    // printf("0010 ^ 0011 = (%d)", y & z);
    /*
            0010
            0011
            ----

    */
}

void bitwiseRShift() {
    /*
        1111 1111 >> 1 = 
        >> 1 = 
        >> 1 =
    */
	printf("%d\n", 255 >> 3);
    // 1010 1010 >> 1 = 
	printf("%d\n", 170 >> 1);
    // 0001 1111 >> 1 = 
    // >> 1 = 
    // >> 1 = 
    // >> 1 = 
    // >> 1 = 
	printf("%d\n", 31 >> 5);
}

void bitwiseLShift() {
    // 0000 0001 << 1 =
	printf("%d\n", 1 << 1);
    // 0000 0101 << 1 =
    // << 1 = 
	printf("%d\n", 5 << 2);
    // 0000 0001 << 8 = 
	printf("%d\n", 1 << 8);
}

int main() {
    char select[10];

	int running = 1;
    while (running) {
        printf("Q(0) AND(1) OR(2) XOR(3) NOT(4)\nShift Left(5) Shift Right(6):\n");
        fgets(select, 10, stdin);
        int selection = atoi(select);
        switch (selection) {
            case 0:
				running = 0;
				break;
            case 1:
				bitwiseAND();
				break;
            case 2:
				bitwiseOR();
				break;
            case 3:
				bitwiseXOR();
				break;
            case 4:
				bitwiseXOR();
				break;
            case 5:
				bitwiseRShift();
				break;
            case 6:
				bitwiseXOR();
                break;
            default:
                break;
        }
    }

    return 0;
}