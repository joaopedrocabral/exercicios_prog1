#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[20], i, soma_positivos = 0, qtd_negativos = 0;

    for(i = 0; i<20; i++){
        printf("\n%d⁰ NUMERO: ", i+1);
            scanf(" %d", &numeros[i]);

        if(numeros[i]>=0){
            soma_positivos += numeros[i];
        } else {
        qtd_negativos++;
        }
    }

    printf("\nSOMA DOS NUMEROS POSITIVOS: %d\n", soma_positivos);
    printf("\nQUANTIDADE DE NUMEROS NEGATIVOS: %d\n", qtd_negativos);

    return 0;

}