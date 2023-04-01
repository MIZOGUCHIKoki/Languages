#include <stdio.h>
#include <stdlib.h> // for atoi function

#define MAX_DATA 4 // 1 byte

int main(void) {
	char input[MAX_DATA];
	fgets(input, sizeof(input), stdin);
	int input_int;
	input_int = atoi(input);
	input_int += 10;
	printf("%d\n", input_int);
	return 0;
}
