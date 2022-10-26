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

void fibo(int size){
    int t1 = 0, t2 = 1, save;
    for (int i = 0; i <= size; i++){
        printf("%d | ",t1);
        save = t1;
        t1 = t2;
        t2 += save;
    }
}


float* variancia(float* u, float* v){
    float *p = (float*) malloc(3*sizeof(float));
    p[0] = u[1]*v[2] - v[1]*u[2];
    p[1] = u[2]*v[0] - v[2]*u[0];
    p[2] = u[0]*v[1] - v[0]*u[1];
    return p;
}
// Dessa maneira declaramos o espaço do vetor na memória do programa e conseguimos retorna-lo
