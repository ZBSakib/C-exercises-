#define _CRT_NO_WARNINGS
#include<stdio.h>

unsigned largest = 0;

void setLargest(unsigned int u)
{
    if (largest < u)
    {
        largest = u;
    }
}

void printLargest()
{
    printf("%d \n", largest);
}

/* Write a module largest.c that contains two functions
1. void setLargest(unsigned int u) , and
2. void printLargest() , and, in addition,
a global variable unsigned largest .

The first function sets variable largest=max(u, largest), and the second one prints value of variable largest.*/