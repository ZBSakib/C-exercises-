#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int askNumber(void) {
	int n = 0;
	printf("Enter an integer:\n");
	scanf("%d", &n);
	return n;
}


int main() {
	int num = 0;
	int sum = 0;
	while (num >= 0) {
		sum += num;
		num = askNumber();
	}
	printf("Sum of the non-negative integers: %d\n", sum);
	return 0;
}

/*1) Write a function that reads an integer from keyboard and returns value of the integer
2) Write a program that asks integers from an user. Once the given integer is negative, the program prints sum of the non-negative integers, and after that terminates.

Everything shall be in one file.*/