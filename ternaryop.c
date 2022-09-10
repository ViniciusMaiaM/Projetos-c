#include <stdio.h>
int input(int x, int y);

int main(){
    int x;
    int y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    if(input(x,y)){
        printf("\nX is greater than y\n");
    }
    else{
        printf("\nY is greater than x\n");
    }
    return 0;
}

int input(int x, int y){

    return x > y ? 1 : 0;
}