#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int valida_cpf(char cpf[]);

int main(){
    char cpf[14] = "706.343.734-80";
    if (!valida_cpf(cpf)){
        printf("Não");
        return 0;
    }
    else{
        printf("Sim");
    }
    return 0;
}

int valida_cpf(char cpf[]){
    int tamanho = strlen(cpf);
    int cpf_int[11];
    int tam = sizeof(cpf_int)/sizeof(cpf_int[0]);

    for (int i = 0; i< tamanho;i++){
        if (i == 3 || i == 7 || i == 11){
            continue;
        }

        cpf_int[i] = cpf[i]-48;
        printf("\n%d\t",cpf_int[i]);
        //Transformando de char para int
    }
        printf("\n%d",tam);
    


    // for(int i = 0; i < tam; i++){
    //     printf("\n%d\t",cpf_int[i]);
    // }

    // printf("\n%d\n",tam);

    int soma = 0;
    for (int i = 0;i<9;i++){
        soma += cpf_int[i]*(10-i);
    }

    int resultado = (soma*10)%11;
    
    int dig1;
    
    if ((resultado == 10) || (resultado == 11)){
        dig1 = 0;
    }

    else{
        dig1 = 11-resultado;
    }

    soma = 0;

    for(int i = 0; i < 10; i++){
        soma += cpf_int[i]*(11-i);
    }

    int resultado2 = (soma/11)*11;
    resultado2 -= soma;
    int dig2 = 0;

    if ((resultado2 == 0) || (resultado2 == 1)){
        dig2 = 0;
    }

    else{
        dig2 = 11-resultado2;
    }

    if (dig1 == cpf_int[10] && dig2 == cpf_int[11]){   
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