#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void printEvery2nd(char* s) {

    char c[80] = "";

    for (int i = 0; i < strlen(s); i += 2) {
        putchar(s[i]);
        c[i / 2] = s[i];
    }
    
}

int  main() {
    char s[80];
    printf("Enter a string: ");
    scanf("%s", s);
    printEvery2nd(s);
}
/*A C type string is accessed by a pointer that points to the first character of the string. End of the string is marked as character '\0', which numerical value is 0. For example string "dog" is stored in memory as 'd', 'o', 'g', '\0'.

Your task is to create a function void printEvery2nd(char *s) that prints every second character of the string s, given as a parameter. For example printEvery2nd("computer") prints "cmue".*/