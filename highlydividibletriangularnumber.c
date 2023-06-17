#include <stdio.h>

int countDivisors(long long int number) {
    int count = 0;
    long long int i;

    for (i = 1; i * i <= number; i++) {
        if (number % i == 0) {
            count += 2;
        }

        // If number is a perfect square, count one divisor only
        if (i * i == number) {
            count--;
        }
    }

    return count;
}

int main() {
    long long int triangleNumber = 0;
    long long int i = 1;

    while (countDivisors(triangleNumber) <= 500) {
        triangleNumber += i;
        i++;
    }

    printf("The first triangle number to have over five hundred divisors is: %lld\n", triangleNumber);

    return 0;
}
