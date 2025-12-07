#include <stdio.h>
#include <stdlib.h>

int divisor(int x, int y){
    if((x%y)==0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int x, y;

    printf("\nDIGITE OS VALORES (x,y): ");
    scanf("%d,%d", &x,&y);

    if(divisor(x,y)==1){
        printf("\nDIVISIVEL");
    } else {
        printf("\nNAO E DIVISIVEL");
    }
    
    return 0;
}