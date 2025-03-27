#include <stdio.h>

int main(){
    int rows;

    printf("Number of rows:");
    scanf("%d", &rows);

    for (int i = rows; i>=1; i--){
        for (int j = 1; j<=1; j++){
            print("*");
        }
        print("\n");
    }
    return 0;
}