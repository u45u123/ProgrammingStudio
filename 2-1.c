#include <stdio.h>

int main(){

    int height, weight;
    float bmi;

    scanf("%d %d", &height, &weight);

    float h = height / 100.0; 
    bmi = weight / (h * h);

    printf("%.1f\n", bmi);

    return 0;
}