#include <stdio.h>

int eh_digito(char x);

int main(){
    char digito;
    
    printf("\n Insira um digito: ");
    scanf("%c",&digito);

    if(!eh_digito(digito)){
        printf("\n Não é digito!\n");
    }

    else{
        printf("\n É Digito!\n");
    }

    return 0;
}

int eh_digito(char x){
    if (x >= '0' && x <= '9'){
        return 1;
    }
    return 0;
    
}