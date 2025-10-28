#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int an, ak, k, n,r;

    printf("\nDIGITE O TERMO QUE VOCE JA CONHECE DA P.A: ");
        scanf("%d", &ak);

    printf("\nDIGITE A POSICAO DESSE TERMO: ");
        scanf("%d", &k);

    printf("\nQUAL TERMO VOCE QUER ENCONTRAR: ");
        scanf("%d", &n);

    printf("\nQUAL A RAZAO DA P.A: ");
        scanf("%d", &r);

    an = ak + (n - k) * r;

    printf("%d TERMO: %d", n, an);

    return 0;
}