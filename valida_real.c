#include <stdio.h>

int valida_float(float dinheiro);

int main(){

    float din = 124.42;

    if (!valida_float(din)){
        printf("\nErro\n");
        return 0;
    }

    printf("\nCerto\n");
    return 0;
}

int valida_float(float dinheiro){


    if (((dinheiro >= '0') && (dinheiro <= '9')) || (dinheiro = '.')){
        return 1;
    }
    
    return 0;
}