typedef struct jogo Jogo;

struct jogo{
    int cod;
    char nome[15];
    char genero[15];
    char data[15];
    char status;
};

Jogo* cadastra_jogo(void);
void grava_jogo(Jogo* game);
void exibe_jogo(Jogo* game);
char menu(void);
Jogo* busca_jogo(void);
void lista_jogo(void);
void exclui_jogo(Jogo* game); 
void att_jogo(Jogo* game);
void lista_genero(void);
