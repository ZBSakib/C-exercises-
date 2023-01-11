#pragma once
#include <stdlib.h>
#include <stdbool.h>
#include"gt.h"

const int o = 0;

bool greaterThanzero(int i) {
    if (i < o) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{

    printnumbers(0);
    printnumbers(3);
    printnumbers(-1);
    printnumbers(1);

}