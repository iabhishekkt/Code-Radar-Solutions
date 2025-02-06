#include <stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    int b= a & (-a);
    printf("%d",b);
}