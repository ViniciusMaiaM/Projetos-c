#include <stdio.h>

void sort(int array[], int size);

int main(){




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