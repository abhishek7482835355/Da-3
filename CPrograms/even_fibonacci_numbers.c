#include <stdio.h>
// program to calculate the sum of even valued fibonacci numbers below 4 million
int main() {
    int limit = 4000000;
    int sum = 0;
    int fib1 = 1;
    int fib2 = 2;

    while (fib2 <= limit) {
        if (fib2 % 2 == 0) {
            sum += fib2;
        }

        int nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("The sum of even-valued Fibonacci terms below %d is: %d\n", limit, sum);

    return 0;
}
