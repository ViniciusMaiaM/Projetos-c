#include <stdio.h>

int main(){

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
        md = 30;
    }

    else{
        md = 31;
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