#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>



int LargestIndex(int array[], int N) {
    int i, index = 0;

    for (i = 0; i < N; i++)
        if (array[i] > array[index])
            index = i;

    return index;
}

int main() {
    int i, array[100], n, index, largest;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    index = LargestIndex(array, n);
    largest = array[index];

    printf("Largest element index = %d and largest value = %d.\n", index , largest);
    return 0;
}
/*Implement function

int LargestIndex(int array[], int N)

which returns index of the largest value in the array.

Example: If array is 0, 1, 2, 9, 1, 4, 2 the function returns 3. Remember that indexing starts from 0 in C!*/

