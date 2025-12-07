#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, soma = 0, contador = 0;

    printf("\nDIGITE UM NUMERO (-1 para sair): ");
        scanf(" %d", &num);

    while(num != -1){

        if(num > 0 ){
            soma += num;
            contador++;
        }
        
        printf("\nDIGITE OUTRO NUMERO (-1 para sair): ");
        scanf(" %d", &num);
    }

    if(contador > 0){
        float media = soma/contador;
        printf("\nMEDIA = %.2f\n", media);
    } else {
        printf("\nNENHUM VALOR FOI DIGITADO!\n");
    }

    return 0;
    
}