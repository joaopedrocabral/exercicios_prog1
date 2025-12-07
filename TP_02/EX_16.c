#include <stdio.h>

int main(){
    int nota;

    printf("\nDIGITE A NOTA DO ALUNO: ");
        scanf(" %d", &nota);

    if(nota < 0 || nota > 10){
        printf("\nNOTA INVALIDA, DIGITE UM VALOR DE 0 A 10!");

        return 0;
    }


    switch(nota){
        case 10:
        case 9:
            printf("\nCONCEITO (A)");
        break;

        case 8:
        case 7:
            printf("\nCONCEITO (B)");
        break;

        case 6:
        case 5:
            printf("\nCONCEITO (C)");
        break;

        default:
            printf("\nCONCEITO (D)");
        break;
    }

    return 0;

}