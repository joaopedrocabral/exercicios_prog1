#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int  a1, q, n;
    double an;

    printf("\nDIGITE O PRIMEIRO TERMO DA P.G: ");
        scanf(" %d", &a1);

    printf("\nDIGITE A RAZAO DA P.G: ");
        scanf(" %d", &q);

    printf("\nDIGITE O NUMERO DE TERMOS DA P.G: ");
        scanf(" %d", &n);

    for(int i = 1; i <= n; i++){
        an = a1 * pow(q, (i - 1));
        
        printf("\nTERMO %d: %.0lf\n", i, an);
    }

    return 0;
}