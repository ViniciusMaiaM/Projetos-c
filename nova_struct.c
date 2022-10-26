#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nova_struct.h"

int main(){
    Cliente* fulano;
    int opc;
    printf("Programa de cadastro de clientes!!\n");
    opc = menu();
    while (opc != 0){
        switch (opc){
        case 1:
            fulano = preenche_cliente();
            break;
        
        case 2:
            exibe_cliente(fulano);
            break;

        default:
            break;
        }
        opc = menu();
    }
}


Cliente* preenche_cliente(){
    Cliente* clt;
    clt = (Cliente*) malloc(sizeof(Cliente));
    printf("\nInforme o nome do cliente: ");
    scanf("%30[ ^\n]",clt -> nome_cliente);
    getchar();
    printf("\nInforme o codigo de seu banco: ");
    scanf("%10[^\n]",clt -> cod_banco);
    getchar();
    printf("\nInforme o numero de sua conta: ");
    scanf("%10[^\n]",clt -> num_conta);
    getchar();
    printf("\nInforme sua agência: ");
    scanf("%10[^\n]",clt -> agencia);
    getchar();
    printf("\nInforme o valor do cheque: ");
    scanf("%d",&clt -> valor);
    getchar();
    printf("\nInforme a data: ");
    scanf("%10[^\n]",clt -> data);
    getchar();
    return clt;
}

void exibe_cliente(const Cliente* clt){
    printf("\nMatrícula: %s\n", clt ->nome_cliente);
    printf("Código banco: %s\n", clt->cod_banco);
    printf("Número conta: %s\n",clt->num_conta);
    printf("Agência: %s\n",clt->agencia);
    printf("Valor: %d\n",clt->valor);
    printf("Data: %s\n",clt->data);
}

int menu(void){
    int op;
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar cliente\n");
    printf("3 - Exibir cliente\n");
    printf("0 - Encerrar programa\n");
    printf("Escolha sua opção: ");
    scanf("%d", &op);
    getchar();
    return op;
}