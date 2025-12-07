#include <stdio.h>
#include <stdlib.h>

int main(){
    char caractere;

    printf("\nDIGITE UM CARACTERE: ");
        scanf(" %c", &caractere);

    printf("\nANTERCESSOR: %d", caractere - 1);
    printf("\nSUCESSOR: %d", caractere + 1);

    return 0;
    
}