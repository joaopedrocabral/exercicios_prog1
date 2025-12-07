#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, num, i, soma = 0;

    printf("\nDIGITE A QUANTIDADE DE TERMOS: ");
        scanf(" %d", &n);

    for(i = 0; i < n; i++){
        printf("\nDIGITE O %d⁰ NUMERO: ", i + 1);
            scanf(" %d", &num);
        soma += num;
    }

    printf("\nSOMA TOTAL: %d", soma);

    return 0;

}