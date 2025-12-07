#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("\nDIGITE UM NUMERO: ");
        scanf(" %d", &num);

    if((num%2)==0){
        printf("\n%d E PAR!");
    } else {
        printf("\n%d E IMPAR!");
    }

    return 0;
}