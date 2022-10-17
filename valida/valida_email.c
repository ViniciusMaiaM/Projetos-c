#include <stdio.h>
#include <string.h>

int valida_email(char email[]);

int main(){

    char email[] = {"vinicius.maia.706@ufrn.edu.br"};

    if(valida_email(email)){
        printf("\nDeu certo!\n");
        return 0;
    }

    printf("\nDeu errado!\n");
    return 0;
}

int valida_email(char email[]){

    int arroba = 0, pont = 0;

    if (strlen(email) > 0){
        for(int i = 0; i < strlen(email); i++){
            
            if(email[i] == '@'){
                arroba ++;
            }

            else if(email[i] == '.'){
                pont++;

            }
        }

        if(arroba == 1 && pont!= 0){
            return 1;
        }

        else{
            return 0;
        }
    }
    return 0;
}