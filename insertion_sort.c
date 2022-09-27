#include <stdio.h>

void sort(int array[], int size);

int main(){
    int size;
    int search;
    int result;

    printf("Input the size of the array: ");
    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size; i++){
        printf("Input the %d term of your array: ",i+1);
        scanf("%d",&array[i]);
    }

    sort(array, size);

    

    return 0;
}

void sort(int array[], int size){
    int save;

    for (int i = 1; i <= size; i++){
        save =  array[i];
        int j = i-1;

        while (j >= 0 && array[i] > save){
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = save;
    }

}