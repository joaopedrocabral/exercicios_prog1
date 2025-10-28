#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int ak, k, n;
    double an, q;

    // ak = termo conhecido; q = razão; n = posição do termo a encontrar
    // an = resultado, k = posição do termo ja conhecido

    printf("\nDIGITE O TERMO CONHECIDO DA P.G: ");
        scanf("%d", &ak);

    printf("\nDIGITE A POSICAO DESSE TERMO: ");
        scanf("%d", &k);

    printf("\nDIGITE QUAL TERMO DESEJA ENCONTRAR: ");
        scanf("%d", &n);

    printf("\nDIGITE A RAZAO: ");
        scanf("%lf", &q);

    an = ak * pow(q, (n - k));

    printf("\nO TERMO %d DA P.G E: %.0lf", n, an);

    return 0;
}