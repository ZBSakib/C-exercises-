#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int isPrimeNumber(int);

int main()
{
    bool isPrime;
    for (int n = 2; n < 100; n++) {
       
        isPrime = isPrimeNumber(n);

        if (isPrime == true)
            cout << n << " ";
    }
    return 0;
}


int isPrimeNumber(int n) {
    bool isPrime = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

/*Copy isPrime function from lecture notes to your source code and write a software that prints all prime numbers below 100 space separated in one line.*/
