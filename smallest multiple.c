// this is a program to calculate the smallest number that is divisible by numbers from 1 to n
#include <stdio.h>

long long findSmallestMultiple(int limit) {
    long long smallestMultiple = 1;

    for (int i = 2; i <= limit; i++) {
        int divisor = i;
        if (smallestMultiple % divisor != 0) {
            smallestMultiple *= divisor;
            for (int j = 2; j <= divisor; j++) {
                if ((smallestMultiple * j) % divisor == 0) {
                    smallestMultiple *= j;
                    break;
                }
            }
        }
    }

    return smallestMultiple;
}

int main() {
    int limit = 20;
    long long smallestMultiple = findSmallestMultiple(limit);

    printf("The smallest positive number divisible by all numbers from 1 to %d is: %lld\n", limit, smallestMultiple);

    return 0;
}
