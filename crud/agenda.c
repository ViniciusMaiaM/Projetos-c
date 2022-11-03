#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

int main(){
    char op;
    op = menu();
    while(op != '0'){
        switch (op){
            case '1':
                cadastra_pessoa();
                break;

            default:
                break;
        }
        op=menu();
    }

    return 0;
}

char menu(void){
    char op;
    system("clear||cls");
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar contato\n");
    printf("2 - Pesquisar contato\n");
    printf("3 - Alterar contato\n");
    printf("4 - Excluir contato\n");
    printf("5 - Listar todos os contatos\n");
    printf("0 - Encerrar programa\n");
    printf("\nEscolha sua opção: ");
    scanf("%c", &op);
    return op;
}


void cadastra_pessoa(void){
    Pessoa* contato;
    system("clear||cls");
    printf("==========================\n");
    printf("========   Menu   ========\n");
    printf("======== Cadastro ========\n");
    printf("==========================\n");
    contato = (Pessoa*) malloc(sizeof(Pessoa));
    printf("Informe um código para a pessoa: ");
    scanf("%d",&contato->cod);
    getchar();
    printf("\nInforme o nome da pessoa: ");
    scanf(" %14[^\n]",contato->nome);
    getchar();
    printf("\nInforme o número da pessoa: ");
    scanf(" %14[^\n]",contato->cel);
    getchar();
    printf("\nInforme a data de nascimento: ");
    scanf(" %14[^\n]",contato->nasc);
    printf("\nInforme o sexo da pessoa: ");
    scanf("%c",&contato->sexo);
    getchar();
    exibe_pessoa(contato);
    getchar();
    grava_pessoa(contato);
    free(contato);
}

void grava_pessoa(Pessoa* contato){
    FILE* fp;
    fp = fopen("contato.dat","ab");

    if(fp == NULL) {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    fwrite(contato,sizeof(Pessoa),1,fp);
    fclose(fp);
}

void exibe_pessoa(const Pessoa* contato){
    printf("Código: %d\n",contato->cod);
    printf("Nome: %s\n",contato->nome);
    printf("Num celular: %s\n",contato->cel);
    printf("Data nascimento: %s\n",contato->nasc);
    printf("Sexo: %c\n",contato->sexo);
}