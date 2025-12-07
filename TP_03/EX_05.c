#include <stdio.h>
#include <stdlib.h>

void dia_semana(int num){
    char *dias[] = {"DOM","SEG","TER","QUA","QUI","SEX","SAB"};

    if(num < 1 || num > 7){
        printf("\nNUMERO INVALIDO");
    } else {
        printf("%s", dias[num-1]);
    }

}

int main(){
    int num;
    printf("\nDIGITE UM DIA (1-7): ");
    scanf(" %d", &num);

    dia_semana(num);

    return 0;
}