#include <stdio.h>

int main() {
    int sumOfSquares = 0;
    int squareOfSum = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    squareOfSum *= squareOfSum;

    int difference = squareOfSum - sumOfSquares;

    printf("The difference between the sum of the squares and the square of the sum is: %d\n", difference);

    return 0;
}
