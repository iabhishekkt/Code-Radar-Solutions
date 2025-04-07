#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a==0){
        return 0;
    }
    int b=1;
    while(!(a&1)){
        a>>=1;
        b++;
    }
    printf("%d",b);
    return 0;
}