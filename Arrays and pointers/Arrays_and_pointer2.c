#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


int Largest(int array[], int N)
{
    int i;
    int largest = array[0];

    for (i = 1; i < N; i++)
        if (array[i] > largest)
            largest = array[i];

    return largest;
}




int main()
{
    int array[100], i,n;
    printf("Enter the number of element in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter numbers in array %d :\n ", i);
        scanf("%d", &array[i]);
    }

    printf("Largest value in the array is %d ", Largest(array,n));
    return 0;
 
}

/*Implement function

int Largest(int array[], int N)

which returns a largest value in the array.

Example: If array is 0, 1, 2, 9, 1, 4, 2 the function returns 9.*/

