#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


bool isPalRec(char str[], int i, int j) {
    
    if (i == j)
    return true;

    if (str[i] != str[j])
    return false;

    if (i < j + 1)
    return isPalRec(str, i + 1, j - 1);

    return true;
}

bool isPalindrome(char str[]) {
    int n = strlen(str);
    
    if (n == 0)
    return true;

    return isPalRec(str, 0, n - 1);
}



int main() {
    char str[100];
    printf("Enter the word: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Yes \n");

    else
        printf("No \n");
}


/*A palindrome is string which contains reads same backwards as forward. For example "Sit on a potato pan, Otis" is palindrome. Create a function that checks if given string is palindrome. The function shall return true  or false.

Hint: Use the previous assignment to trim the string.

Further information about palindromes can be found for example in https://en.wikipedia.org/wiki/Palindrome .*/

