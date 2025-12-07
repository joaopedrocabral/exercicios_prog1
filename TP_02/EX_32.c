#include <stdio.h>
#include <stdlib.h>

int main (){
    int L;

    printf("\nQUANTOS TERMOS DESEJA PARA A SEQUENCIA: ");
    
    if(scanf(" %d", &L) != 1) return 0;

    if(L <+ 0){
        printf("\nNENHUM TERMO PARA IMPRIMIR!");
        return 0;
    }

    long long a = 0;
    long long b = 1;
    long long contador = 1;

    printf("%lld", a);

    if(L >= 2){
        printf(" %lld", b);
        contador = 2;
    }

    while (contador < L) {
        long long proximo = a + b;
        printf(" %lld", proximo);

        a = b;
        b = proximo;

        contador++;
    }
    
    return 0;
}
