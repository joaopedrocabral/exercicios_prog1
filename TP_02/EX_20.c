#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;

    printf("\nDIGITE UM NUMERO: ");
        scanf(" %d", &num1);

    printf("\nDIGITE OUTRO NUMERO: ");
        scanf(" %d", &num2);

    printf("\nDIGITE OUTRO NUMERO: ");
        scanf(" %d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("\n%d E MAIOR!", num1); 
    } else if(num2 > num1 && num2 > num3){
        printf("\n%d E MAIOR!", num2);
    } else if(num3 > num1 && num3 > num2){
        printf("\n%d E MAIOR!", num3);
    }

    return 0;
 
}