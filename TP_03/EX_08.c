#include <stdio.h>
#include <stdlib.h>

int regular(int x)
{
    if (x <= 0)
    {
        return 0;
    }

    if (x==1){
        return 1;
    }

    while ((x % 2) == 0){
         x = x / 2;
    } 
    if (x == 1){
        return 1;
    }

    while ((x % 3) == 0){
        x = x / 3;
    }
    if (x == 1){
        return 1;
    }

    while ((x % 5) == 0){
        x = x / 5;
    }
    if (x == 1){
    return 1;
    }

    return 0;
    
    }

int main()
{
    int x;

    printf("\nDIGITE UM VALOR: ");
    scanf("%d", &x);

    if (regular(x) == 1)
    {
        printf("\nREGULAR");
    }
    else
    {
        printf("\nNAO E REGULAR");
    }

    return 0;
}