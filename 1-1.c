#include <stdio.h>

int main(){
    int size;
    int stars, blank1, blank2; 
    int i, j;

    scanf("%d", &size);

    for(i = 0; i < size; i++){
        for(j = 0; j < i; j++){
            printf(" ");
        }
        printf("*");
        for(j = 0; j < 2*(size-1-i); j++){
            printf(" ");
        }
        printf("*\n");
    }
    for(i = 0; i < size; i++){
        for(j = 0; j < size*2; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = 0; i < size; i++){
        for(j = 0; j < i; j++){
            printf(" ");
        }
        for(j = 0; j < (size-i)*2; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = 0; i < size*2; i++){
        printf("*");
    }
    printf("\n");

    return 0;
}