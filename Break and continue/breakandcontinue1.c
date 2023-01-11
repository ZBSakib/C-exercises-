#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	for (int num = 1; num <= 100; num++) {
		if (num % 7 == 0) {
			continue;
		}
		printf("%d ", num);
	}

}

/*Create a software that prints all positive integer values 1...100 that are not divisible by 7. Use continue-statement in your solution.
*/