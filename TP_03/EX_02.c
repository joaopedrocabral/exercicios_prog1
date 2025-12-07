#include <stdio.h>
#include <stdlib.h>

void extenso(int num)
{

    char *ext[] = {
        "ZERO", "UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS", "SETE", "OITO", "NOVE", "DEZ"};

    if (num >= 0 && num <= 10)
    {
        printf("\n%s", ext[num]);
    }
    else
    {
        printf("\nNUMERO DIGITADO INVALIDO OU NAO PERMITIDO");
    }
}

int main()
{
    int num;

    printf("\nDIGITE UM NUMERO: (0-10) ");
    scanf(" %d", &num);

    extenso(num);

    return 0;
}