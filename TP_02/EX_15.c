#include <stdio.h>

int main(){
    int mes;

    printf("\nDIGITE UM NUMERO (1-12): ");
        scanf(" %d", &mes);

    switch(mes){

        case 1:
        printf("\nJANEIRO");
        break;

        case 2:
        printf("\nFEVEREIRO");
        break;

        case 3:
        printf("\nMARCO");
        break;

        case 4:
        printf("\nABRIL");
        break;

        case 5:
        printf("\nMAIO");
        break;

        case 6:
        printf("\nJUNHO");
        break;

        case 7:
        printf("\nJULHO");
        break;

        case 8:
        printf("\nAGOSTO");
        break;

        case 9:
        printf("\nSETEMBRO");
        break;

        case 10:
        printf("\nOUTUBRO");
        break;

        case 11:
        printf("\nNOVEMBRO");
        break;

        case 12:
        printf("\nDEZEMBRO");
        break;

        default:
        printf("\nMES INVALIDO!");
        break;
    }

    return 0;

}