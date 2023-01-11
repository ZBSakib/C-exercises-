#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int* allocateArray(int N) {
    int* numbers = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {

        numbers[i] = 0;
    }
    return numbers;
}

void releaseArray(int* array) {
    free(array);

}

void printArray(int* a, int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int N;
    printf("Give alength of an Array: ");
    scanf("%d", &N);
    int* array = allocateArray(N);
    printArray(array, N);
    releaseArray(array);
}

/*Write a function that allocates array of N integers and set all values of the array value 0. Array length N is parameter of the function, and the function shall return pointer to to array. In addition, write a function that releases allocated array.

Example: allocateArray(10) returns pointer to {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}*/