# define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv) {
    int num = 1;
    printf("Please enter a positive integer: ");
    scanf("%d", &num);
       for (int i = -5; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

/*Write a program that asks user a positive integer number  u . The program prints all integer numbers  −5…u  at one line separated by space.*/