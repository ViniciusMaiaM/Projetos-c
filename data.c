#include <stdio.h>
#include <stdlib.h>

int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int data_valida(int dia, int mes, int ano);
int bissexto(int ano);

int main(){
    system("clear||cls");
    int dia;int mes;int ano;
    printf("\nInsira o dia: ");
    scanf("%d",&dia);
    printf("\nInsira o mes: ");
    scanf("%d",&mes);
    printf("\nInsira o ano: ");
    scanf("%d",&ano);
    while (!data_valida(dia,mes,ano)){
        printf("\nData Valida, insira novamente...\n");
        printf("\nInsira o dia: ");
        scanf("%d",&dia);
        printf("\nInsira o mes: ");
        scanf("%d",&mes);
        printf("\nInsira o ano: ");
        scanf("%d",&ano);
    }

    printf("A data %d/%d/%d é válida!\n",dia,mes,ano);
    return 0;
}

int data_valida(int dia, int mes, int ano){
    int md;
    if (ano < 0 || mes > 12 || mes < 0 || dia < 1){
        return 0;
    }
    
    if  (mes == 2) {
        if (bissexto(ano)){
            md = 29;
        }
        else{
            md = 28;
        }
    }
    
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        md = meses[mes-1];
    }

    else{
        md = meses[mes-1];
    }

    if (dia > md){
        return 0;
    }

    return 1;
}

int bissexto (int ano){ 
    if ((ano % 4 == 0) && (ano % 100 != 0)){
        return 1;
    }

    else if (ano % 400 == 0){
        return 1;
    }

    else{
        return 0;
    }
}

//Criado com base no algoritmo do professor flavius