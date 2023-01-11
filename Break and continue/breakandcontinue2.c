#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int num = 1;
	 while (true)
	{
		printf("%d ", num);
		if (num % 7 == 0 && num % 5 == 0)
		{
			break;
		}

		num++;
    }
}

/*Write a program that that prints all positive integers up first number, which is included, that is divisible by 7 and 5. Use break to   terminate a loop.

(ERRATA: non-negative changed to positive at 11.10. If you submitted assignment with original requirements, it is accepted)
*/