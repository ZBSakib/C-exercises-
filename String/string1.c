#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void trim(char* src, char* tgt) {
    int i, j;
    for (i = 0, j = 0; src[i] != '\0'; i++) {
       if ((src[i] >= 'A' && src[i] <= 'Z') || (src[i] >= 'a' && src[i] <= 'z')) {
            tgt[j] = tolower(src[i]);
            j++;
        }
    }
    tgt[j] = '\0';
}


int main() {
    char src[80] = "Hello World! It's a nice day today, August 1st .";
    char* tgt = malloc(strlen(src) * sizeof(tgt));
    trim(src, tgt);
    printf("%s", tgt);
    free(tgt);
}

/*Write a function void trim(char *src, char *tgt) that removes all characters that are not English alphabets or numbers, and in addition, converts the string to lower case. The result shall be returned in string tgt. tgt is allocated before calling the function:

char *tgt=malloc(...);
trim(src, tgt);
...
free(tgt)


For example "Hello World! It's a nice day today, August 1st ." -> "helloworlditsanicedaytodayaugust1st". 
*/