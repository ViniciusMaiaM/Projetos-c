#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int valida_cpf(char cpf[]);

int main(){
    char cpf[11] = "70634312415";
    if (valida_cpf(cpf)){
        printf("\nSim");
    }
    else{
        printf("\nNão");
    }
    return 0;
}

int valida_cpf(char cpf[]){
    int tamanho = strlen(cpf);
    int cpf_int[tamanho];
    int soma_dig_um = 0;
    int soma_dig_dois = 0;
    int dig1 = 0;
    int dig2 = 0;
    int resultado = 0;
    int resultado2 = 0;

        //Transformando de char para int
    for (int i = 0; i< 9;i++){
        cpf_int[i] = cpf[i]-'0';
        soma_dig_um += cpf_int[i]*(10-i);
        printf("\n%d",cpf_int[i]);
    }

    //Digito um
    resultado = soma_dig_um%11;
    
    if (resultado ==10){
        dig1 = 0;
    }

    //Digito dois
    for(int i = 0; i < 10; i++){
        soma_dig_dois += cpf_int[i]*(11-i);
    }

    resultado2 = soma_dig_dois%11;

    if (resultado2 == 10){
        dig2 = 0;
    }

    else{
        dig2 = 11-resultado2;
    }


    if ((dig1 == cpf_int[9]) && (dig2 == cpf_int[10])){   
        return 1;
    } 

    else{
        return 0;
    }

}







/*
int valida_cpf(char cpf[]){
    int validador = 2;

    while(validador != 0){  //com mascara ###.###.###-##
        int cpf_int[11];
        int soma_d1=0, soma_d2=0, calculo_d, tam,d=0,i=0, digitos;
        tam = strlen(cpf);

        while(d<=tam){
            if(cpf[d]!='.' && cpf[d]!='-'){
                cpf_int[i] = cpf[d]-48;
                i=i+1;
            }
            d++;
        }
        
        //calculo
        i=0;
        while(i<9){
            soma_d1 = soma_d1 +((cpf_int[i])*(10-i));
            soma_d2 = soma_d2 +((cpf_int[i])*(11-i));
            i++;
        }
        // primeiro digito

        soma_d1 = (soma_d1 *10)%11;
        if(soma_d1>9){
            soma_d1=0;
        }
        
        // segundo digito
        soma_d2 = ((soma_d2 +(soma_d1*2)) *10)%11;
        if(soma_d2 >9){
            soma_d2=0;
        }
        
        //calculo dos digitos
        calculo_d =(soma_d1 * 10)+soma_d2;
        
        // verificar digitos
        i=cpf_int[9];
        d=cpf_int[10];
        
        //conferindo
        digitos = ((i)*10)+(d);
        if(calculo_d==digitos){
            validador=0;
        }
        else{
            validador=1;
        }
    }
    return validador;
}
*/