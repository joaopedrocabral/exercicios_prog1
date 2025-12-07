#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        for (int i = 3; i <= (sqrt(num)); i + 2)
        {
            if ((num % i == 0))
            {
                return 0;
            }
            else if ((num % i) != 0)
            {
                return 1;
            }
        }
    }
}

int main(){
    int num;
    printf("\nDIGITE UM NUMERO: ");
    scanf("%d", &num);

    if(primo(num)== 1){
        printf("\nNUMERO PRIMO!");
    } else {
        printf("\nNAO E PRIMO!");
    }

    return 0;
}