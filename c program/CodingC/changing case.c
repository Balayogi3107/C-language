#include <stdio.h>
#include <string.h>

int main() {
    int i, l;
    char s[50] = "aNI";
    char result[50]; // Declared as a char array to store the string
    
    l = strlen(s);
    for (i = 0; i < l; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result[i] = s[i] + 32; // Convert uppercase to lowercase
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            result[i] = s[i] - 32; // Convert lowercase to uppercase
        } else {
            result[i] = s[i];      // Keep special characters/spaces as-is
        }
    }
    result[l] = '\0'; // Properly terminate the string with a null character

    printf("Result :%s\n", result);
    return 0;
}