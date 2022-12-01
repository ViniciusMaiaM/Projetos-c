#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct animal Animal;

struct animal
{
    char* nome_animal;
    Animal* prox;
};


int main(){
    FILE* fp;
    int i, tam;
    char linha[250];
    Animal* novo_animal;
    Animal* lista;

    fp = fopen("")
}
