#include <math.h> 
#include <stdio.h> 
  
double findSQRT(double N) 
{ 
    return sqrt(N); 
} 
  

int main() 
{ 
  
    int N; 
    printf("Enter the number:");
    scanf("%d", &N);
    printf("%f ", findSQRT(N)); 
    if(N<0)
        printf("Error");
    
    return 0; 
} 

/* Write a program that prints square root of a given number. 
If number is negative, message "ERROR" is printed. */