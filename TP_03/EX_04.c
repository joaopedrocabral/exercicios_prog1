#include <stdio.h>
#include <stdlib.h>

void romano(int num)
{
    /*if (num < 0 || num > 50)
    {
        printf("\nNUMERO NAO SUPORTADO!");
    }
    else
    {
        if (num >= 50)
        {
            printf("L");
            num -= 50;
        }
        else if (num >= 40)
        {
            printf("XL");
            num -= 40;
        }
        while (num >= 10)
        {
            printf("X");
            num -= 10;
        }
        if (num >= 9)
        {
            printf("IX");
            num -= 9;
        }
        else if (num >= 5)
        {
            printf("V");
            num -= 5;
        }
        else if (num >= 4)
        {
            printf("IV");
            num -= 4;
        }
        while (num >= 1)
        {
            printf("I");
            num -= 1;
        }
    }*/

    int valores[] = {50, 40, 10, 9, 5, 4, 1};
    char *romanos[] = {"L", "XL", "X", "IX", "V", "IV", "I"};

    if (num < 1 || num > 50)
    {
        printf("\nNUMERO NAO SUPORTADO!");
    }

    for (int i = 0; i < 7; i++)
    {
        while (num >= valores[i])
        {
            printf("%s", romanos[i]);
            num -= valores[i];
        }
    }
}

int main()
{
    int num;

    printf("\nDIGITE UM NUMERO: ");
    scanf(" %d", &num);

    romano(num);

    return 0;
}