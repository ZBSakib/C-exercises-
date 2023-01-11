#include<stdio.h>
#include<conio.h>
 
int main() {
   int length, width, area;
 
   printf("\nEnter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the width of Rectangle : ");
   scanf("%d", &width);
 
   area = length * width;
   printf("\nArea of Rectangle : %d", area);
 
   return (0);
}


/*Write a C program that computes area of a rectangle by given width and length. Use scanf to read the values from user. 
See example03.c how scanf works.
 Print result on screen. Return shall contain only one .c or .cpp file.*/