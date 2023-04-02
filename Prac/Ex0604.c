#include <stdio.h>

int main(void) {
	char str[] = "string";
	char ch, buf[64];

	printf("str = %s\n", str);
	printf("(scanf)>> ");
	scanf("%[^\n]", buf);
	printf("%s\n", buf);
	
	return 0;
}
