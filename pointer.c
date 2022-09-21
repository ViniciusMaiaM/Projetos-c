#include <stdio.h>

void test(int*, int*);

int main(){
    int ano = 3124;
    int idade = 32;
    test(&ano,&idade);
    printf("%d\t%d",ano,idade);
    return 0;
}

void test(int *ano, int *idade){
    int save;
    save = *ano;
    *ano = *idade;
    *idade = save;
}