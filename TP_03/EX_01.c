#include <stdio.h>
#include <stdlib.h>

void mes(int num) {
    char *meses[] ={
        "JANEIRO", "FEVEREIRO", "MARCO", "ABRIL",
        "MAIO", "JUNHO", "JULHO", "AGOSTO",
        "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO"
    };

    if(num >= 1 && num <= 12){
        printf("%s", meses[num-1]);
    } else {
        printf("\nVALOR DIGITADO INVALIDO");
    }
}

int main()
{
    int num;

    printf("\nDIGITE UM NUMERO: ");
    scanf(" %d", &num);

    printf("\nO NUMERO [%d] CORRESPONDE AO MES DE: ", num);
    mes(num);

    return 0;
}