#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void printNumber(int val)
{
	switch (val)
	{
	case 1: printf("one \n"); break;
	case 2: printf("two \n"); break;
	case 3: printf("three \n"); break;
	case 4: printf("four \n"); break;
	case 5: printf("five \n"); break;
	case 6: printf("six \n"); break;
	case 7: printf("seven \n"); break;
	case 8: printf("eight \n"); break;
	case 9: printf("nine \n"); break;
	default: printf("ERROR: parameter out of range!"); break;
	}
}
int main() {
	int number = 0;
	printf("Enter a number between 1 and 9: \n");
	scanf("%d", &number);
	printNumber(number);
   }

/*Create a function void printNumber(int val). If the parameter is 0...9, the function prints corresponding number in English. 
For example, printNumber(9) prints string "nine".
 If parameter is less than 0 or greater than 9, the function prints "ERROR: parameter out ouf range!".*/