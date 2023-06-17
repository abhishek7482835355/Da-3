#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int count = 0;
    int num = 2;
    int nthPrime = 0;

    while (count < 10001) {
        if (isPrime(num)) {
            nthPrime = num;
            count++;
        }

        num++;
    }

    printf("The 10001st prime number is: %d\n", nthPrime);

    return 0;
}
