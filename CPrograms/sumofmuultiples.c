//this is the code to calculate the sum of all multiples of 3 or 5 under 1000
#include <stdio.h>

int main() {
    int limit = 1000;
    int sum = 0;

    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum of all the multiples of 3 or 5 below %d is: %d\n", limit, sum);

    return 0;
}
