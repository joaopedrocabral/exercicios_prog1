#include <stdio.h>
#include <stdlib.h>

int main(){
    char unidade;
    float temp, convertida;

    printf("\nDIGITE A UNIDADE DA TEMPERATURA (C ou F): ");
        scanf(" %c", &unidade);

    printf("\nDIGITE A TEMPERATURA: ");
        scanf(" %f", &temp);

    switch(unidade){
        case 'C':
        case 'c':
        convertida = (9.0/5.0) * temp + 32;
        printf("\nA TEMPERATURA CONVERTIDA E %.2f F", convertida);
        break;

        case 'f':
        case 'F':
        convertida = (5.0/9.0) * (temp - 32);
        printf("\nA TEMPERATURA CONVERTIDA E %.2f C", convertida);
        break;

        default:
        printf("\nUNIDADE DE TEMPERATURA INVALIDA!");

    }

    return 0;
}