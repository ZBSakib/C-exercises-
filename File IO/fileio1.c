#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* filename = "myfile01.txt";

int main() {
	FILE* f = fopen(filename,"wrt");
	if (f == NULL) {
		printf("This file does not exist\n");
		exit(1);
	}

	char userInput[100];
	printf("Enter a string:\t");
	fgets(userInput, sizeof(userInput), stdin);
	fprintf(f, "%s", userInput);
	fclose(f);

	int c;
	FILE* file;
	file = fopen(filename, "rt");
	if (file) {
		while ((c = getc(file)) != EOF)
			putchar(c);
		fclose(file);
	}

	FILE* fptr = fopen(filename, "awrt");
	printf("Enter Another string: \t");
	fgets(userInput, sizeof(userInput), stdin);
	fprintf(f, "%s", userInput);
	fclose(fptr);

	int c1;
	FILE* file1;
	file1= fopen(filename, "rt");
	if (file1){
		while ((c = getc(file1)) != EOF)
			putchar(c);
		fclose(file1);
	}
}

/*Write a software that
1.asks user a string
2.writes the string to file file01.txt, close the file after completed
3.reads content of the file01.txt, close file after completed
4.asks user another string
5.merges the string to end of the file01.txt, close file after completed
6.prints content of file01.txt to screen*/