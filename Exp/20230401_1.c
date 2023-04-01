#include <stdio.h>
#include <string.h>
#define MAX_DATA  256
int main(void){
	char input[MAX_DATA];
	// 標準入力 fgets(var, size, stream)
	fgets(input, sizeof(input), stdin); // return -> Pointer

	char *return_pointer; // ポインタ変数
  return_pointer = strchr(input, '\n'); // 改行コードを探し，ポインタで返す
	if (return_pointer != NULL) {
		*return_pointer = '\0';
	}

	strcat(input, "A"); // input += "A"
	printf("%s\n", input);
	return 0;
}
