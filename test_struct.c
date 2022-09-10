#include <stdio.h>
#include <string.h>

struct pessoa { //Tipo de dado/variavel que agrupa outras variaveis
    int idade;
    float peso;
    char nome[25];
};

int main(){
    struct pessoa s1;
    int id;
    float pe;
    char nam[25];
    printf("Input your age: ");
    scanf("%d",&id);
    printf("\nInput your weight: ");
    scanf("%f",&pe);
    printf("\nInput your name: ");
    scanf("%s",nam);
    s1.idade = id;
    s1.peso = pe;
    strcpy(s1.nome,nam);
    printf("\nHello %s, your age is %d and your weight is %.2f\n",s1.nome,s1.idade,s1.peso);
    return 0;
}



