#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;

    for(i = 1; i<=20; i++){
        double quadrado = pow(i, 2);
        printf("\n %d² = %.2f", i, quadrado);
    }

    return 0;
}