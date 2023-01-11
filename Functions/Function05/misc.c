#include<stdio.h>

int foo = 0;

void printIntegers(unsigned i0, unsigned i1)
{
    for (i0; i0 <= i1; i0++)
    {
        printf("%d ", i0);
    }
    printf("\n");
}

void printAlphabets()
{
    for (char a = 'a'; a <= 'z'; a++)
    {
        printf("%c", a);
    }
    printf("\n");
}

void max(float a, float b)
{
    if (a > b)
    {
        printf("%f \n", a);
    }
    else
    {
        printf("%f \n", b);
    }
}
/*- Write a module misc.c that contains:
1) void printIntegers(unsigned i0, unsigned i1); //Print all integers i0...i1 space separated in one line
2) void printAlphabets(); //Print alphabets 'a'...'z' in one line without separator. HINT: Use for(char c='a'; c<'z'; c++) {...} and printf("%c", c).
3) float max(float a, float b); //Returns a if a is larger than b, otherwise returns b.
4) int foo=0; //Global variable

- Create a corresponding header file misc.h

Test your module. Do not include test code for your return!
*/
