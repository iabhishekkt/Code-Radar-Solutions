#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    while (str[i] != '\0') {
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }
        if (str[i] != '\0') {
            count++;
        }
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
    }

    printf("%d\n", count);

    return 0;
}
