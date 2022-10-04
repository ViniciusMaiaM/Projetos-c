#include <stdio.h>

int main(){
    int size = 0;
    float temp = 0, med = 0.0;
    printf("Input the number of temperatures: ");
    scanf("%d",&size);

    printf("Now input the values:\n");
    for(int i = 0; i < size; i++){
        printf("Term %d: ",i++);
        scanf("%f",&temp);
        med += temp;
        temp = 0;
    }

    med /= size;
    printf("Average temperature: %.2f Cº\n",med);
    return 0;
}

// Baseado no código do professor flavius gorgonio