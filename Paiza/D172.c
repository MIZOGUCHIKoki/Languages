#include <stdio.h>
#include <stdlib.h> // for atoi func

#define MAX_DATA 6
int main(void) {
	char input[MAX_DATA];
	fgets(input, sizeof(input), stdin);
	int input_int;
	input_int = atoi(input);
	input_int -= 1;
	printf("%d\n", input_int);
	return 0;
}
