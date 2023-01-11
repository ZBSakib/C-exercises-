#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int largestNumber(i) {
    static int y = 0;

    if (i > y) {
        y = i;
    }
    return y;
}

/*Write a module largest.c that contains a function
unsigned int largestNumber(unsigned int i)
which stores largest argument value over function calls.
 HINT: use static keyword and initialize the variable with value 0.*/