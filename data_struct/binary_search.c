#include <stdio.h>

int binary_search(int array[], int higher, int lower, int num);

int main(){
    int size;
    int search;
    int result;

    printf("Input the size of the array: ");
    scanf("%d",&size);
    int array[size-1];

    for(int i = 0; i < size; i++){
        printf("Input the %d term of your array: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\nNow input the number that you want to find: ");
    scanf("%d",&search);

    result = binary_search(array,size,0,search);
    if (result >= 0){
        printf("\nThe number %d is the %d in the array\n",search,result);
    }
    else{
        printf("\nThe number %d is not present in the array!\n",search);
    }

    return 0;
}

int binary_search(int array[], int higher, int lower, int num){ 
    while(lower != higher){
        int start = lower + (lower-higher)/2;
        if(array[start] == num){
            return start;
        }

        else if(num > array[start]){
            lower = start+1;
        }

        else{
            higher = start-1;
        }

    }
    return -1;
}