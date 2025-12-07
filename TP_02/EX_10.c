#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numeros[10];
    int i;

    for(i = 0; i<10; i++){
        printf("\nDIGITE O %d⁰ NUMERO: ", i +1);
            scanf(" %d", &numeros[i]);
    }

    for (i = 0; i<=10; i++){
        printf("\n%d² = %.2f", numeros[i], pow(numeros[i],2));
    }

    return 0;
    
}