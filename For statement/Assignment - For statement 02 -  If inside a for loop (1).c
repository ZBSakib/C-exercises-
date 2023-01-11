#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
   int i = 1, n;
     printf("Enter any number : ");
     scanf("%d", &n);
     printf("All numbers between 1 to %d divisible by 3 or 4 are : \n", n);
        for (i = 1; i <= n; i++)
    {
          if (i % 3 == 0 || i % 4 == 0)
           printf("%d\n", i);

    }

}

/*Write a program that asks user a positive integer number  u . The program prints all integer numbers  1…u  that are divisible by 3 or 4 space separated in one line. 
HINT: a%b=0 if a is divisible by b.*/