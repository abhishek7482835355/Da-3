#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int expandAroundCenter(char* s, int left, int right);

char* longestPalindrome(char* s) {
    int n = strlen(s);
    int start = 0, end = 0;
    for (int i = 0; i < n; i++) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = len1 > len2 ? len1 : len2;
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    char* result = (char*) malloc(sizeof(char) * (end - start + 2));
    strncpy(result, s + start, end - start + 1);
    result[end - start + 1] = '\0';
    return result;
}

int expandAroundCenter(char* s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

int main() {
    char s[] = "ghghghghghghghghghg";
    char* result = longestPalindrome(s);
    printf("%s\n", result);
    free(result);
    return 0;
}
