#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;

    printf("\nDIGITE UM NÚMERO: ");
        scanf("%f", &num);

    if (num>=1 & num<=9) {
        printf("\nO VALOR ESTA DENTRO DA FAIXA PERMITIDA (1-9)\n");
    } else {
        printf("\nO VALOR NAO ESTA DENTRO DA FAIXA PERMITIDA (1-9)\n");
    }

    system("pause");

    return 0;
}±