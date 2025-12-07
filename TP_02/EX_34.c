#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, soma = 0, cont = 0, maior, menor;
    float media;

    printf("\nDIGITE UM VALOR (0 para finalizar): ");
    scanf(" %d", &numero);

    if (numero == 0){
        printf("\nNENHUM NUMERO FOI DIGITADO.\n");
        return 0;
    }

    soma = numero;
    menor = numero;
    maior = numero;
    cont++;

    while (1){
        printf("\nDIGITE OUTRO NUMERO: ");
        scanf(" %d", &numero);

        if(numero == 0) break;

        soma+= numero;
        cont++;

        if(numero < menor){
            menor = numero;
        }
        if (numero > maior){
            maior = numero;
        }
    }

    media = (float)soma/cont;

    
    printf("\n----------RESULTADOS----------\n");
    printf("\nTOTAL DE TERMOS: %d", cont);
    printf("\nMEDIA: %.2f", media);
    printf("\nMENOR NUMERO: %d", menor);
    printf("\nMAIOR NUMERO: %d", maior);

    return 0;

} 