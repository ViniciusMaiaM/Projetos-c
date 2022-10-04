#include <stdio.h>

int main(){
    int vetor[5] = {1,2,3,4,5};
    int *point = &vetor[0]; 
    int *point1 = &vetor[1];
    int *point2 = &vetor[2];
    int *point3 = &vetor[3];
    int *point4 = &vetor[4];

    printf("%p\n%p\n%p\n",point,point2,point3);

    printf("\n| %d | %d | %d | %d | %d | \n", vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);

    point[0] = 100, point1[0] = 200,point2[0] = 300,point3[0] = 400,point4[0] = 500;

    printf("\n| %d | %d | %d | %d | %d | \n", vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);

    return 0;
}