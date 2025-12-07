#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;

    printf("\nDigite o primeiro numero: ");
        scanf(" %d", &num1);

    printf("\nDigite o segundo numero: ");
        scanf("\n %d", &num2);

    printf("\nDigite o terceiro numero: ");
        scanf("\n %d", &num3);

    if (num1 != -999 && num2 != -999 && num3 != -999){

    printf("\n%d * 3 = %d\n%d * 3 = %d\n%d * 3 = %d", num1, num1*3, num2, num2*3, num3, num3*3);

    } else {
        return 0;
    }

    return 0;
}