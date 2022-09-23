#include <stdio.h>

int main(){
    int size;
    printf("Put the number of terms that you want in your sequence: ");
    scanf("%d",&size);
    int t1 = 0, t2 = 1, save;
    printf("The sequence is: | ");
    for (int i = 0; i <= size; i++){
        printf("%d | ",t1);
        save = t1;
        t1 = t2;
        t2 += save;
    }
    
    printf("\n");
    return 0;   
}