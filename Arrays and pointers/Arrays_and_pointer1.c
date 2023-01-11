#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdbool.h>


#define numberN 10
int number[numberN];

void AskNumber(int num[], int N) {
	for (int i = 0; i < N; i++) {
		printf("Enter a number:\n");
		scanf("%d", &num[i]);
	}
}

void PrintNumber(int num[], int N) {
	printf("Entered numbers: \n");
	for (int i = 0; i < N; ++i) {
		printf("%d ", num[i]);
	}
}

int main() {

	int number1[numberN];
	AskNumber (number1, numberN);
	PrintNumber (number1, numberN);
	
	}

	
/*Write a function that asks 10 integers and insert the numbers into an array.*/