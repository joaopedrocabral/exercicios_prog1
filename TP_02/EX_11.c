#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, valor, maior;

    printf("\nDIGITE QUANTOS NUMEROS SERAO RECEBIDOS: ");
        scanf(" %d", &num);

    printf("\nDIGITE O 1⁰ NUMERO: ");
        scanf(" %d", &maior);

    for(i = 2; i<=num; i++){
        printf("\nDIGITE O %d⁰ NUMERO: ", i);
            scanf(" %d", &valor);

        if(valor>maior){
            maior = valor;
        }

    }
    printf("\nO MAIOR NUMERO DIGITADO E: %d\n", maior);

    return 0;
}