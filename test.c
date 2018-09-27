#include <stdio.h>

int main() {
	int i = 0; 
	int j = 0; // i, j控制行或列 
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d\t", i, j, i*j);
		printf("\n");
	}
	system("pause");
	return 0;
}