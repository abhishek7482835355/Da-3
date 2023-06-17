#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;

            if (c > b && (a * a + b * b == c * c)) {
                int product = a * b * c;
                printf("The product of the Pythagorean triplet for which a + b + c = 1000 is: %d\n", product);
                return 0;
            }
        }
    }

    printf("No Pythagorean triplet found for which a + b + c = 1000.\n");
    return 0;
}
