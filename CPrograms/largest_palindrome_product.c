// program to find the largest palindrome number that is a product of 2 three digit numbers
#include <stdio.h>

int isPalindrome(int number) {
    int reversed = 0;
    int temp = number;

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return (number == reversed);
}

int main() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", largestPalindrome);

    return 0;
}
