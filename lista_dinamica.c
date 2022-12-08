#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplica(char*);
static char* lelinha(void);

typedef struct cliente Cliente;

struct cliente
{
    int codigo;
    char* nome;
    Cliente* prox;
};


int main(){
    Cliente* clt;
    Cliente* lista;

    lista = NULL;

    clt = (Cliente*) malloc(sizeof(Cliente));
    clt->codigo = 1;
    printf("Nome do Cliente %d: ", clt->codigo);
    clt->nome = lelinha();
    clt->prox = lista;
    lista = clt;
    // Criando o segundo cliente
    clt = (Cliente*) malloc(sizeof(Cliente));
    clt->codigo = 2;
    printf("Nome do Cliente %d: ", clt->codigo);
    clt->nome = lelinha();
    clt->prox = lista;
    lista = clt;
    // Criando o terceiro cliente
    clt = (Cliente*) malloc(sizeof(Cliente));
    clt->codigo = 3;
    printf("Nome do Cliente %d: ", clt->codigo);
    clt->nome = lelinha();
    clt->prox = lista;
    lista = clt;
    printf("\nLista de Clientes\n");
    clt = lista;

    while (clt != NULL) {
        printf("Endereço atual: %p\n", clt);
        printf("Código: %d\n", clt->codigo);
        printf("Nome: %s\n\n", clt->nome);
        printf("Próximo endereço: %p\n\n", clt->prox);
        clt = clt->prox;
    }
    
    // Limpando a memória
    clt = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(clt);
        clt = lista;
    }

    printf("Fim do programa\n");
    return 0;
}

static char* lelinha(void) {
    char linha[255];
    scanf(" %26[^\n]", linha);
    return duplica(linha);
}

char* duplica(char* s) {
    int n = strlen(s) + 1;
    char* d = (char*) malloc(n*sizeof(char));
    strcpy(d, s);
    return d;
}
