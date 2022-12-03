typedef struct jogo Jogo;
typedef struct dinamica Din;

struct jogo{
    int cod;
    char nome[15];
    char genero[15];
    char data[15];
    char status;
};

struct dinamica{
    int cod;
    char nome[15];
    char genero[15];
    char data[15];
    char status;
    Din* prox;
};

void att_jogo(Jogo* game);
void exclui_jogo(Jogo* game); 
void exibe_jogo(Jogo* game);
void exibe_dinam(Din* din);
void grava_jogo(Jogo* game);
void lista_jogo(void);
void lista_genero(void);
void lista_nome();

char menu(void);

Jogo* busca_jogo(void);
Jogo* cadastra_jogo(void);
