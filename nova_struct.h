typedef struct cliente Cliente;

struct cliente{
    char nome_cliente[30];
    char cod_banco[10];
    char num_conta[10];
    char agencia[10];
    int valor;
    char data[10];
};

Cliente* preenche_cliente();
void exibe_cliente(const Cliente* clt);
int menu(void);