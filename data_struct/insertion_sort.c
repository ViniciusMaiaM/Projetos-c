#include <stdio.h>

void sort(int array[], int size);
void show(int array[], int size);


int main(){
    int size;

    printf("Input the size of the array: ");
    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size; i++){
        printf("Input the %d term of your array: ",i+1);
        scanf("%d",&array[i]);
    }

    sort(array, size);

    show(array,size);

    return 0;
}

void sort(int array[], int size){
    int save;

    for (int i = 1; i < size; i++){
        int j = i-1;
        save =  array[i];

        while (j >= 0 && array[j] > save){
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = save;
    }

}

void show(int array[], int size){
    printf("\n");
    for(int i = 0; i < size; i++){
        printf("| %d |\n",array[i]);
    }
    printf("\n");
}