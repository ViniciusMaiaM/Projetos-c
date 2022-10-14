#include <stdio.h>

// int eh_digito(char x);
int classifica(char x);

int main(){
    char digito;
    
    printf("\n Insira um digito: ");
    scanf("%c",&digito);

    // if(!eh_digito(digito)){
    //     printf("\n Não é digito!\n");
    // }

    // else{
    //     printf("\n É Digito!\n");

    // }

    if (classifica(digito) == 0){
        printf("\n É digito!\n");
    }

    else if (classifica(digito) == 1)
    {
        printf("\n É caracter\n");
    }
    

    else{
        printf("\n Caracter Especial!\n");
    }


    return 0;
}

// int eh_digito(char x){
//     if (x >= '0' && x <= '9'){
//         return 1;
//     }
//     return 0;
    
// }

int classifica(char x){
    if(x >= '0' && x <= '9'){
        return 0;
    }

    else if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
        return 1;
    }

    else{
        return 2;
    }
}