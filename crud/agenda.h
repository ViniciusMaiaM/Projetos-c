typedef struct pessoa Pessoa;

struct pessoa{
    int cod;
    char nome[15];
    char cel[15];
    char nasc[15];
    char sexo;
};

void cadastra_pessoa(void);
void grava_pessoa(Pessoa* contato);
void exibe_pessoa(const Pessoa* contato);
char menu(void);