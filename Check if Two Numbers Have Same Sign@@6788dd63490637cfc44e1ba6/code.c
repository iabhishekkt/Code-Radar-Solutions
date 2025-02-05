#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    if ((a>0 && b>0)|| (a<0 &&b<0)){
        printf("Same Sign");
    }else if(a>0 && b>0) {
        printf("Both Positive");
    }else if(a<0 && b<0){
        printf("Both Negative");
    }else{
        printf("Different Sign");
    }
}