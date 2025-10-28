#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, i, numTemporario;
    
    printf("\nDIGITE UM NUMERO: ");
        scanf(" %d", &numTemporario);

    if ((numTemporario%2)==0){
        p = numTemporario;
        printf("\nO NUMERO E PAR");
        printf("\nP = %d", p);
        printf("\nI = 0");

    } else if ((numTemporario%2)==!0){
        i = numTemporario;
        printf("\nO NUMERO E IMPAR");
        printf("\nP = 0");
        printf("\nI = %d", i);
    }

    return 0;
}