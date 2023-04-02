#include <stdio.h>

int main(void) {
	short int n, m; // 車の台数, 渋滞定義
	scanf("%hd%hd", &n, &m);
	// printf("車の台数: %hd, 渋滞定義: %hdm\n", n, m);
	short int car[n];
	short int i = 0;
	short int jam = 0;
	while(i < n - 1) {
		scanf("%hd", &car[i]);
		// printf("car[%d] = %hd\n", i, car[i]);
		if( car[i] <=m ) {
			jam += car[i];
		}
		i++;
	}
	printf("%d\n", jam);
}
