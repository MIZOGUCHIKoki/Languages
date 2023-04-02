#include <stdio.h>

int main(void) {
	short int n, x, y;
	short int i;
	scanf("%hd%hd%hd", &n, &x, &y);
	
	for ( i = 1; i <= n; i++) {
		if( i % x == 0 && i % y ==0 ) {
			printf("AB\n");
		} else if( i % x == 0 ) {
			printf("A\n");
		} else if( i % y == 0 ) {
			printf("B\n");
		} else {
			printf("N\n");
		}
	}
	
	return 0;
}
