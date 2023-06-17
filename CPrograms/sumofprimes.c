#include <stdio.h>

int isPrime(long long int n) {
    if (n <= 1) {
        return 0;
    }

    long long int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    long long int limit = 2000000;
    long long int sum = 0;
    long long int i;

    for (i = 2; i < limit; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("The sum of all the primes below two million is: %lld\n", sum);

    return 0;
}
