#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct rect {
    float x1, y1, x2, y2;
};

void Scale(struct rect original, struct rect* smaller, struct rect* bigger) {
    smaller->x1 = 0.5 * original.x1;
    smaller->y1 = 0.5 * original.y1;
    smaller->x2 = 0.5 * original.x2;
    smaller->y2 = 0.5 * original.y2;
    bigger->x1 = 2 * original.x1;
    bigger->y1 = 2 * original.y1;
    bigger->x2 = 2 * original.x2;
    bigger->y2 = 2 * original.y2;
}
void PrintRect(struct rect* i) {
    printf("%0.2f  ", i->x1);
    printf("%0.2f  ", i->y1);
    printf("%0.2f  ", i->x2);
    printf("%0.2f  ", i->y2);
    printf("\n");

}

int main() {
    struct rect original = { 1, 2, -3, 4 };
    struct rect* smaller = malloc(4 * sizeof(struct rect));
    struct rect* bigger = malloc(4 * sizeof(struct rect));
    Scale(original, smaller, bigger);
    PrintRect(smaller);
    PrintRect(bigger);
    free(smaller);
    free(bigger);
   
}

/*Let

struct rect{
  float x1, y1, x2, y2;
}

which is used to store coordinates of two opposite corners of a rectangle. Create a function void Scale(struct rect original, struct rect *smaller, struct rect *bigger) which fills *smaller and *bigger so that values in *smaller are 0.5 times corresponding values of original and values in *bigger are 2 times corresponding values of original.

Example: original={1, 2, -3, 4} => *smaller={0.5, 1, -1.5, 4} and *bigger={2, 4, -6, 8}.*/



    
  
    