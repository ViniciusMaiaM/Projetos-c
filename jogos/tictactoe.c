#include <stdio.h>
#define dim 3

void clean_tab(int dim, int tab[][dim]);
void show(char tab[3][3]);
void play(int dim, int *lin, int *col);
int empty(int dim, int tab[][dim],int lin, int col);
void play_x(int dim, int tab[][dim],int lin, int col);
void play_0(int dim, int tab[][dim], int lin, int col);

int main(){
    char *tab, coluna, linha;
    tab = (int **) malloc(linha*sizeof(char*));
    for(int i = 0; i < linha; i++){
        tab[i] = (int *) malloc(coluna*sizeof(char))
    }
    void show(tab);
    return 0;
}

void clean_tab(int dim, int tab[][dim]){

}

void show(char tab[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; i++){
            printf("%c\t",tab[i][j]);
        }
        printf("\n");
    }
}