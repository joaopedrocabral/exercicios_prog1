#include <stdio.h>
#include <stdlib.h>

void cabecalho(char nome[]){
    printf("\n=========================================");
    printf("\nUFOP - Universidade Federal de Ouro Preto");
    printf("\nICEA - Instituto de Ciências Exatas e Aplicadas");
    printf("\nDisciplina de Programação de Computadores I");
    printf("\nNome: %s", nome);
    printf("\n=========================================");
}

int main(){
    char nome [50];

    printf("\nDIGITE SEU NOME: ");
    scanf(" %49[^\n]", nome);

    cabecalho(nome);

    return 0;

}