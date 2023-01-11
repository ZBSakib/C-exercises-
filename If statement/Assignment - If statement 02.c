

#include <stdio.h>

int main()
{
    
    int i;
    
    printf("Enter a number:");
    scanf("%d", &i);
    if(i>0)
        printf("Greater than zero");
    else if(i<0)
        printf("Less than Zero");
    else
        printf("Zero");

    return 0;
}

/* Write a program that asks user an integer number i. The program prints

- "Greater than zero", if i>0,

- "Less than zero", if i, and

- "Zero", if i=0.*/
