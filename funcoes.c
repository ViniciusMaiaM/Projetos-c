#include <stdio.h>
#include "funcoes.h"

int fat(int num){
    int fato = 1;

    for(int i = 1; i <= num; i++){
        fato *= i;
    }

    return fato;
}

int arran(int n, int k){
    return(fat(n)/fat(n-k));
}

int comb(int n, int k){
    return(fat(n)/((fat(k)*fat(n-k))));
}

