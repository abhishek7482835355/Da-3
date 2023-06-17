//program to calculate even prime factors of very large numbers
#include <stdio.h>

long long findLargestPrimeFactor(long long n) {
    long long largestPrime = 2;

    while (n > largestPrime) {
        if (n % largestPrime == 0) {
            n /= largestPrime;
        } else {
            largestPrime++;
        }
    }

    return largestPrime;
}

int main() {
    long long number = 600851475143;
    long long largestPrimeFactor = findLargestPrimeFactor(number);

    printf("The largest prime factor of %lld is: %lld\n", number, largestPrimeFactor);

    return 0;
}
