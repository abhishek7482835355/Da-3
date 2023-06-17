//this program takes input of two names and calculates flames for both the names
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[50], name2[50];
    printf("Enter the first name:\n");
    scanf("%[^\n]s", name);
    scanf("%*c"); 

    printf("Enter the second name:\n");
    scanf("%[^\n]s", name2);
    scanf("%*c"); 


    for (int i = 0; name[i]; i++) {
        name[i] = tolower(name[i]);
    }
    for (int i = 0; name2[i]; i++) {
        name2[i] = tolower(name2[i]);
    }

    int diff = strcmp(name, name2);

    if (diff == 0) {
        printf("Try entering different names.\n");
        return 0;
    }
    else if (diff < 0) {
        diff *= (-1);
    }

    char calc[7] = "FLAMES";

    while (calc[2] != '\0') {
        int rem = diff % strlen(calc);
        for (int i = rem; i < strlen(calc) - 1; i++) {
            calc[i] = calc[i + 1];
        }
        calc[strlen(calc) - 1] = '\0';
    }

    switch(calc[0]) {
        case 'F': printf("FRIENDSHIP\n"); break;
        case 'L': printf("LOVE\n"); break;
        case 'A': printf("AFFECTION\n"); break;
        case 'M': printf("MARRIAGE\n"); break;
        case 'E': printf("ENEMY\n"); break;
        default: printf("SIBLINGS\n"); break;
    }

    return 0;
}
