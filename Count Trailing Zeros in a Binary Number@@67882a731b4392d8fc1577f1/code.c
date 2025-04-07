#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    int count = 0;
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;
    }

    printf("%d\n", count);
    return 0;
}
