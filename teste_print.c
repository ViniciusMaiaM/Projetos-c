#include <stdio.h>
char *name();
int main(){
    char nome[25];
    nome[25] = *name();
    printf("\n Olá %s\n",nome);
    return 0;
}

char *name(){
    char nome[25];
    printf("\nInsira seu nome: ");
    scanf("%s",nome); 
    return *nome;
}