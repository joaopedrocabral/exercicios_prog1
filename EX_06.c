#include <stdio.h>
#include <stdlib.h>

int main () {

    int an, a1, n, r;
    // an = P.A; a1: Primeito Termo; n: Número de Termos; r: Razão

    printf("\nDIGITE O PRIMEIRO TERMO DA P.A: ");
        scanf(" %d", &a1);
    
    printf("\nDIGITE A RAZAO DA P.A: ");
        scanf(" %d", &r);

    printf("\nDIGITE O NUMERO DE TERMOS DA P.A ");
        scanf(" %d", &n);

    for (int i=1; i<=n; i++) {
        an = a1 + (i-1)*r;
        printf("\nTERMO %d: %d", i, an);
    }

    return 0;
}