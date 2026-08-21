#include <stdio.h>
#include <string.h>

int main() {
    int i, l;
    char r[50];
    char p[50];

    // 1. Read input FIRST
    scanf("%s", p);

    // 2. NOW calculate length
    l = strlen(p);

    for(i = 0; i < l; i++) {
        if(p[i] >= 'A' && p[i] <= 'Z') {
            r[i] = p[i] + 32;
        }
        else if(p[i] >= 'a' && p[i] <= 'z') {
            r[i] = p[i] - 32;
        }
        else {
            r[i] = p[i];
        }
    }

    // 3. Terminate string r with a null character
    r[l] = '\0';

    printf("%s", r);

    return 0;
}