#include <stdio.h>
#include <stdlib.h>

void input_array(int *array, int n);
void show_array(int *array,int n);

int main(){
    int size, *vet;

    printf("Input the size of the array: ");
    scanf("%d",&size);

    vet = (int*) malloc(size*sizeof(int)); /*Dessa maneira alocamos um espaço na memoria 
    com o malloc e com o n*sizeof(int) pegamos o tamanho do int naquela maquina especifica*/
    
    input_array(vet,size);
    show_array(vet,size);

    free(vet); //Assim liberamos o espaço de memoria alocado
    return 0;
}

void input_array(int *array, int n){

    for (int i = 0; i<n ;i++){
        printf("Vetor[%d]: ",i+1);
        scanf("%d",&array[i]);
    }
}

void show_array(int *array, int n){
    for (int i = 0; i < n; i++){
        printf("\nV[%d] = %d\n", i+1, array[i]);
    }
}