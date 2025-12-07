#include <stdio.h>
#include <stdlib.h>

int main() {
    char op; 
    int num1, num2, resultado;

    printf("\nDIGITE O OPERADOR (+, -, *, /): ");
        scanf(" %c", &op);

    printf("\nDIGITE O 1⁰ NUMERO: ");
        scanf(" %d", &num1);

    printf("\nDIGITE O 2⁰ NUMERO: ");
        scanf(" %d", &num2);

    switch (op){
        
        case '+':
        resultado = num1+num2;
        printf("\n%d + %d = %d", num1, num2, resultado);
        break;

        case '-':
        resultado = num1-num2;
        printf("\n%d - %d = %d", num1, num2, resultado);
        break;

        case '*':
        resultado = num1*num2;
        printf("\n%d * %d = %d", num1, num2, resultado);
        break;

        case '/':
        resultado = num1/num2;
        printf("\n%d / %d = %d", num1, num2, resultado);
        break;

        default:
        printf("\nOPERADOR INVALIDO!\n");
    }

    return 0;
    
}