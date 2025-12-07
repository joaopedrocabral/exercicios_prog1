#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("\nDIGITE O NUMERO (0-255):" );
        scanf(" %d", &num);

    if(num>=0 && num<=255){
        printf("%d EQUIVALE A %c", num, num);
    } else {
        printf("\nNUMERO INVALIDO!");
    }

    return 0;
}