#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float num;

    for(i = 1; i<=10; i++){
        printf("\nDIGITE UM NUMERO: ");
            scanf(" %f", &num);

        printf("\n%d - A METADE DE %.0f E = %.2f",i,  num, (num/2));

    }

    return 0;

}