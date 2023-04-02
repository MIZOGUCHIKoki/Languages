#include <stdio.h>

void max_min(int *array, short int n, int *max, int *min);

int main(void) {
	short int n;
	scanf("%hd", &n);
	short int i = 0;
	short int numbers[n], max, min;
	while( i < n ) {
		scanf("%hd", &numbers[i]);
		printf("numbers[%d] = %hd\n", i, numbers[i]);
		i++;
	}
	max_min(numbers, n, &max, &min);
	printf("max = %hd\nmin = %hd\n", max, min);
	return 0;
}

void max_min(int *array, short int n, int *max, int *min) {
	short int i;
	int size;
	printf("Array size is %d\n", n);
	for (i = 0; i < size; i++) {
		if (*max <= array[i]) { *max = array[i]; }
		if (*min >= array[i]) { *min = array[i]; }
	}
	return; 
}
