#include <stdio.h>
#include <stdlib.h>

int main(){
    char maiuscula, minuscula;

    printf("\nDIGITE A LETRA MAIUSCULA (A-Z): ");
        scanf(" %c", &maiuscula);
    
    minuscula = maiuscula + 32;

    printf("\n%c", minuscula);

    return 0;
}