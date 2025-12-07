#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;

    printf("\nDIGITE O LADO (A): ");
        scanf(" %f", &a);

    printf("\nDIGITE O LADO (B): ");
        scanf(" %f", &b);

    printf("\nDIGITE O LADO (C): ");
        scanf(" %f", &c);


        if (a < b + c && b < a + c && c < a + b){
            
            if(a == b && b == c){
                printf("\nTRIANGULO EQUILATERO");
            } else if (a == b || a == c || b == c){
                printf("\nTRIANGULO ISOSCELES");
            } else {
                printf("\nTRIANGULO ESCALENO");
            }
            
        } else {
            printf("\nAS MEDIDAS NAO FORMAM UM TRIANGULO");
        }

        return 0;
}