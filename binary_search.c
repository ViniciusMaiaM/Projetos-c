#include <stdio.h>

int binary_search(int array[], int size, int count, int num);

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

int binary_search(int array[], int size, int count, int num){
    while(count != size){
        int start = count + (count-size)/2;
        if(array[start] == num){
            return start;
        }

        else if(num > array[start]){
            count = start+1;
        }

        else{
            size = start-1;
        }

    }
    return -1;
}