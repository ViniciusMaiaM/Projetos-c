#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

int main()
{
    char op;
    Jogo *jogo;
    op = menu();
    while (op != '0')
    {
        switch (op)
        {
        case '1':
            jogo = cadastra_jogo();
            grava_jogo(jogo);
            free(jogo);
            break;

        case '2':
            jogo = busca_jogo();
            exibe_jogo(jogo);
            free(jogo);
            break;

        case '3':
            jogo = busca_jogo();
            att_jogo(jogo);
            free(jogo);
            break;

        case '4':
            jogo = busca_jogo();
            exclui_jogo(jogo);
            free(jogo);
            break;

        case '5':
            lista_jogo();
            break;

        case '6':
            lista_genero();
            break;

        default:
            break;
        }
        op = menu();
    }

    return 0;
}

char menu(void)
{
    char op;
    system("clear||cls");
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar jogo\n");
    printf("2 - Pesquisar jogo\n");
    printf("3 - Alterar jogo\n");
    printf("4 - Excluir jogo\n");
    printf("5 - Listar todos os jogos\n");
    printf("6 - Listar jogo por gênero\n");
    printf("0 - Encerrar programa\n");
    printf("\nEscolha sua opção: ");
    scanf("%c", &op);
    return op;
}

Jogo *cadastra_jogo(void)
{
    Jogo *game;
    printf("==========================\n");
    printf("========   Menu   ========\n");
    printf("======== Cadastro ========\n");
    printf("==========================\n");
    game = (Jogo *)malloc(sizeof(Jogo));
    printf("Informe um código para a jogo: ");
    scanf("%d", &game->cod);
    printf("\nInforme o nome da jogo: ");
    scanf(" %14[^\n]", game->nome);
    printf("\nInforme o gênero do jogo: ");
    scanf(" %14[^\n]", game->genero);
    printf("\nInforme a data de lançamento: ");
    scanf(" %14[^\n]", game->data);
    game->status = 'e';
    return game;
}

void grava_jogo(Jogo *game)
{
    FILE *fp;
    fp = fopen("game.dat", "ab");

    if (fp == NULL)
    {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    fwrite(game, sizeof(Jogo), 1, fp);
    fclose(fp);
}

void exibe_jogo(Jogo *game)
{
    system("clear||cls");
    char situacao[20];
    if ((game == NULL) || game->status == 'x')
    {
        printf("\nJogo não encontrado\n");
    }

    else
    {
        printf("\nCódigo: %d\n", game->cod);
        printf("Nome: %s\n", game->nome);
        printf("Gênero: %s\n", game->genero);
        printf("Data lançamento: %s\n", game->data);

        if (game->status == 'e')
        {
            strcpy(situacao, "Em estoque");
        }

        else if (game->status == 'f')
        {
            strcpy(situacao, "Fora de estoque");
        }

        else
        {
            strcpy(situacao, "Não reconhecido");
        }

        printf("Situação do jogo: %s", situacao);
    }
    printf("\nPressione enter...\n");
    getchar();
    getchar();
}

Jogo *busca_jogo()
{
    FILE *fp;
    Jogo *game;
    int cod_bus;
    system("clear||cls");
    printf("\n - Busca Jogo - \n");
    printf("Informe o código: ");
    scanf("%d", &cod_bus);
    game = (Jogo *)malloc(sizeof(Jogo));
    fp = fopen("game.dat", "rb");

    if (fp == NULL)
    {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    while (!feof(fp))
    { // Busca até o final do arquivo
        fread(game, sizeof(Jogo), 1, fp);
        if ((game->cod == cod_bus) && (game->status != 'x'))
        { /*Verifica se o código é igual e o status*/
            fclose(fp);
            return game;
        }
    }

    fclose(fp);
    return NULL;
}

void lista_jogo()
{
    FILE *fp;
    Jogo *game;
    printf("\n\tListagem\n");
    game = (Jogo *)malloc(sizeof(Jogo));
    fp = fopen("game.dat", "rb");

    if (fp == NULL)
    {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    while (fread(game, sizeof(Jogo), 1, fp))
    {
        if (game->status != 'x')
        {
            exibe_jogo(game);
        }
    }

    fclose(fp);
    free(game);
}

void exclui_jogo(Jogo *game)
{
    FILE *fp;
    Jogo *game_arq;
    int acho = 0;
    if (game == NULL)
    {
        printf("\nO jogo não existe!\n");
    }
    else
    {
        game_arq = (Jogo *)malloc(sizeof(Jogo));
        fp = fopen("game.dat", "r+b");
        if (fp == NULL)
        {
            printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
            exit(1);
        }

        while (!feof(fp))
        {
            fread(game_arq, sizeof(Jogo), 1, fp);
            if ((game_arq->cod == game->cod) && (game_arq->status != 'x'))
            {
                acho = 1;
                game_arq->status = 'x';
                fseek(fp, -1 * sizeof(Jogo), SEEK_CUR);
                fwrite(game_arq, sizeof(Jogo), 1, fp);
                printf("\nJogo excluído!\n");
                break;
            }
        }
        if (!acho)
        {
            printf("\nJogo não encontrado!\n");
        }
        fclose(fp);
        free(game_arq);
    }
    printf("\nPressione enter...\n");
    getchar();
    getchar();
}

void att_jogo(Jogo *game)
{
    FILE *fp;
    char resp;
    if ((game == NULL) || game->status == 'x')
    {
        printf("\nJogo não encontrado\n");
        exit(1);
    }

    fp = fopen("game.dat", "r+b");
    if (fp == NULL)
    {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    exibe_jogo(game);
    printf("\nEste é o jogo que você quer atualizar? ");
    scanf("%c", &resp);
    if (resp == 's' || resp == 'S')
    {
        printf("Informe o código do jogo: ");
        scanf("%d", &game->cod);
        printf("Informe o nome do jogo: ");
        scanf(" %15[^\n]", game->nome);
        printf("Informe o gênero do jogo: ");
        scanf(" %15[^\n]", game->genero);
        printf("Informe a data de lançamento do jogo: ");
        scanf(" %15[^\n]", game->data);
        game->status = 'e';
        fseek(fp, (-1) * sizeof(Jogo),  SEEK_CUR);
        fwrite(game, sizeof(Jogo), 1, fp);
        printf("\nAnimal editado com sucesso!\n");
    }

    else
    {
        printf("\nOk, os dados não foram alterados!");
    }

    fclose(fp);
}

void lista_genero(void)
{
    FILE *fp;
    char gen[15];
    Jogo *game;
    printf("\n\tListagem por gênero\n");
    game = (Jogo *)malloc(sizeof(Jogo));
    fp = fopen("game.dat", "rb");

    if (fp == NULL)
    {
        printf("Ocorreu um erro na abertura do arquivo, não é possivel continuar o programa");
        exit(1);
    }

    printf("\n Insira o gênero de jogo que vc quer buscar: ");
    scanf(" %15[^\n]", gen);

    while (fread(game, sizeof(Jogo), 1, fp))
    {
        if (strcmp(game->genero, gen) == 0)
        {
            exibe_jogo(game);
        }
    }

    fclose(fp);
    free(game);
}
