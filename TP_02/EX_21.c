#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;

    printf("\nDIGITE UMA LETRA: ");
        scanf(" %c", &letra);

    printf("\n'%d' em ASCII equivale a %d", letra, letra);

    return 0;
}