#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

int main(){
    char op;
    Jogo* jogo;
    op = menu();
    while(op != '0'){
        switch (op){
            case '1':
                jogo = cadastra_jogo();
                grava_jogo(jogo);
                free(jogo);
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
    printf("1 - Cadastrar jogo\n");
    printf("2 - Pesquisar jogo\n");
    printf("3 - Alterar jogo\n");
    printf("4 - Excluir jogo\n");
    printf("5 - Listar todos os jogos\n");
    printf("0 - Encerrar programa\n");
    printf("\nEscolha sua opção: ");
    scanf("%c", &op);
    return op;
}


Jogo* cadastra_jogo(void){
    Jogo* game;
    system("clear||cls");
    printf("==========================\n");
    printf("========   Menu   ========\n");
    printf("======== Cadastro ========\n");
    printf("==========================\n");
    game = (Jogo*) malloc(sizeof(Jogo));
    printf("Informe um código para a jogo: ");
    scanf("%d",&game->cod);
    getchar();
    printf("\nInforme o nome da jogo: ");
    scanf(" %14[^\n]",game->nome);
    printf("\nInforme o gênero do jogo: ");
    scanf(" %14[^\n]",game->genero);
    printf("\nInforme a data de lançamento: ");
    scanf(" %14[^\n]",game->data);
    game->status = 'm';
    return game;
}

void grava_jogo(Jogo* game){
    FILE* fp;
    fp = fopen("game.dat","ab");

    if(fp == NULL) {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    fwrite(game,sizeof(Jogo),1,fp);
    fclose(fp);
}

void exibe_jogo(const Jogo* game){
    printf("Código: %d\n",game->cod);
    printf("Nome: %s\n",game->nome);
    printf("Gênero: %s\n",game->genero);
    printf("Data lançamento: %s\n",game->data);
    printf("Status: %c\n",game->status);
}

Jogo* busca_jogo(){
    FILE* fp;
    Jogo* game;
    int cod_bus;
    printf("\n - Busca Jogo - \n");
    printf("Informe o código: ");
    scanf("%d",&cod_bus);
    game = (Jogo*) malloc(sizeof(Jogo*));
    fp = fopen("game.dat","rb");
    
    if(fp == NULL) {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }  

    while(!feof(fp)){
        fread(game, sizeof(Jogo),1,fp);
        if((game->cod == cod_bus) && (game->status != 'x')){
            fclose(fp);
            return game;
        }

    }
    
    fclose(fp);
    return NULL;
}