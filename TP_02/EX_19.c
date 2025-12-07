#include <stdio.h>
#include <stdlib.h>

int main(){
    int int1, int2, num;

    printf("\nDIGITE O PRIMEIRO NUMERO DO INTERVALO: ");
        scanf(" %d", &int1);


    printf("\nDIGITE O SEGUNDO NUMERO DO INTERVALO: ");
        scanf(" %d", &int2);

    printf("\nAGORA DIGITE O NUMERO: ");
        scanf(" %d", &num);


    if(num >= int1 && num <= int2){
        printf("\nESTA DENTRO DO INTERVALO!");
    } else {
        printf("\nESTA FORA DO INTERVALO!");
    }

    return 0;
}