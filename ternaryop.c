#include <stdio.h>
int input();

int main(){
    if(input()){
        printf("\nX is greater than y\n");
    }
    else{
        printf("\nY is greater than x\n");
    }
    return 0;
}

int input(){
    int x;
    int y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    return x > y ? 1 : 0;;
}