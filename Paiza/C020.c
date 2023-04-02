#include <stdio.h>

int main(void) {
	float m, p, q;
	scanf("%f%f%f", &m, &p, &q);
	m = m * (100-p)/100 * (100-q)/100;
	printf("%f\n", m);
	return 0;
}
