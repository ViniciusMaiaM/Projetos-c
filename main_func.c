#include <stdio.h>
#include "funcoes.h"

int main(){
    int n, k, combnk, arrnk, fatn;
    printf("Calcula n!, A(n,k) e C(n,k)\n\n");

    printf("Informe o valor de n: ");
    scanf("%d", &n);
    
    printf("Informe o valor de k: ");
    scanf("%d", &k);
    
    fatn = fat(n);
    combnk = comb(n, k);
    arrnk = arran(n, k);

    printf("%d! = %d\n", n, fatn);
    printf("A(%d,%d) = %d\n", n, k, arrnk);
    printf("C(%d,%d) = %d\n", n, k, combnk);
    return 0;
}

//Criado com base no algoritmo do professor flavius