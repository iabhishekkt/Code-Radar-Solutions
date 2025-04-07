#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        printf("%d", n % 2);
        n = n / 2;
    }
    printf("\n");

    return 0;
}
