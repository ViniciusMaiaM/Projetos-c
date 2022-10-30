#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int data_valida_int(int dia, int mes, int ano);
int data_valida_str(char data[]);
int bissexto(int ano);

int main(){
    system("clear||cls");
    char data[10];
    // int dia;int mes;int ano;
    // printf("\nInsira o dia: ");
    // scanf("%d",&dia);
    // printf("\nInsira o mes: ");
    // scanf("%d",&mes);
    // printf("\nInsira o ano: ");
    // scanf("%d",&ano);

    // while (!data_valida(dia,mes,ano)){
    //     printf("\nData Valida, insira novamente...\n");
    //     printf("\nInsira o dia: ");
    //     scanf("%d",&dia);
    //     printf("\nInsira o mes: ");
    //     scanf("%d",&mes);
    //     printf("\nInsira o ano: ");
    //     scanf("%d",&ano);
    // }

    // printf("A data %d/%d/%d é válida!\n",dia,mes,ano);
    
    do{
        printf("Insira sua data no formato (xx/xx/xxxx): \n");
        scanf("%s",data);
    }while(!data_valida_str(data));
    
    return 0;   
}

///////////
//Criado com base no algoritmo do professor Flavius Gorgonio
//////////
int data_valida_int(int dia, int mes, int ano){
    struct tm *atual;

    time_t segundos;
    time(&segundos);

    atual = localtime(&segundos);
    
    int md;
    int dia_atual = atual->tm_mday;
    int mes_atual = (atual->tm_mon)+1;
    int ano_atual = (atual->tm_year)+1900;

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

    if (ano < ano_atual){
        return 0;
    }

    else if (mes < mes_atual){
        return 0;
    }
    
    else if((dia < dia_atual) && (mes <= mes_atual)){
        return 0;
    }

    return 1;
}

///////////
//Criado com base no algoritmo do professor Flavius Gorgonio
//////////
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

int data_valida_str(char data[]){
    int dia, mes, ano;

    if (strlen(data) != 10){
        return 0;
    }

    if (data[2] != '/' || data[5] != '/'){
        return 0;
    }

    dia = ((data[0] - '0') * 10) + (data[1] - '0');
    mes = ((data[3] - '0') * 10) + (data[4] - '0');
    ano = ((data[6] - '0') * 1000) + ((data[7] - '0') * 100) + ((data[8] - '0') * 10) + (data[9] - '0');
    
    if(data_valida_int(dia,mes,ano)){
        return 1;
    }

    return 0;
}