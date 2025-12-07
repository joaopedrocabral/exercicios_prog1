#include <stdio.h>
#include <stdlib.h>

int main(){
    int inferior, superior, i, soma = 0;

    printf("\nDIGITE O LIMITE INFERIOR: ");
        scanf(" %d", &inferior);

    printf("\nDIGITE O LIMITE SUPERIOR: ");
        scanf(" %d", &superior);
        
    printf("\nNUMEROS PARES DO INTERVALO ABERTO:\n");

    for(i = inferior + 1; i < superior; i++){
        if(i%2 == 0){
            printf("\n%d\n", i);
            soma+=i;
        }
    }

    printf("\nSOMA TOTAL: %d", soma);

    return 0;
}