#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    unsigned int flipped = ~n;

    printf("%u\n", flipped);
    return 0;
}
