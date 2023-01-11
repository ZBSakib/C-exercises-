#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int i, j, rows;
    printf("Input number of rows : ");
    scanf("%d", &rows);
       for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
          printf("\n");
    }
}
/*Write a program that ask user a positive integer  n . The program has output of  N  lines; 1st line contains a number 1, 2nd line contains numbers 1 and 2 separated by space etc. 
Use nested for loops to implement the output.*/