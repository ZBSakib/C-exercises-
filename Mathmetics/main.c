#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>




float rand_0_1() {
	float r = rand();

	float lowerlimit = 0.0;
	float upperlimit = 1.0;

	return lowerlimit + (r / RAND_MAX) * (upperlimit - lowerlimit);
}


int main(int argc, char** argv) {
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
               for (int j=0; j<4; j++) {
                    printf("%f\t", rand_0_1());
		      }
		printf("\n");

	    }

}
/*Create a program which you can use to compare results of  rand() -function with different seed values,  srand(seed) :
Create a table containing 4 different seeds
With each seed, draw 10 random numbers in interval  [0,1] , and save them in table
Print the results in four columns so that each column contains numbers with one  seed .
Rerun your software at least 3 times, and see if the results changes between turns.
Submit the source code
The result shall look like (the values may be different)*/