#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int guess = 0, number = 0, cont = 0;
    number = rand()%100+1;
    
    while((guess != number)&&(cont <= 10)){
        printf("\nGuess the number between 100 and 1: ");
        scanf("%d",&guess);
        cont++;

        if (guess > number){
            printf("\nChoose a smaller number");
        }

        else if(guess < number){
            printf("\nChoose a bigger number");
        }

        else if(guess == number){
        printf("\nYou guessed it correctly with %d attempts!\n",cont);        
        break;
        }

    }

    if (cont > 10){
        printf("\nYou exceed the number of tryes!\n");
    }

    return 0;
}
