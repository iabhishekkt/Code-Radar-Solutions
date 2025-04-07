#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int length = strlen(str);

    // Remove the newline character from the string (if any)
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
