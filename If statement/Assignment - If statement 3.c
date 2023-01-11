#include <stdio.h> 
#include <string.h> 


int main() {
	char string1[100];
	char string2[100];
	int i,j;
	
	printf("Enter the first word without space: ");
	scanf("%s",&string1);
	
	for (i = 0; string1[i] !=0; ++i);
	    printf("Enter the second word without space: ");
	    scanf("%s", &string2);
	for (j = 0; string2[j] !=0; ++j);
	    if (i < j) {
		printf("%s", string1);
	}
	else {
		printf("%s", string2);
	}
	return 0;
}

/*Write a program that asks user two words not containing spaces and outputs the word that comes first in alphabetical order.*/

