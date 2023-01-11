#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0;

	for (i = 1; i <= 10; i++) {
		printf("%d ", i);
	}


	i = 1;
	while (i <= 10) {
		printf("%d ", i);
		i++;
	}


	i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}
/*Print integer numbers 1...10 using three repeat structures:
1. Use for-loop
2. Use while-loop
3. Use do-while loop
Write all loops one after another in main-function.*/