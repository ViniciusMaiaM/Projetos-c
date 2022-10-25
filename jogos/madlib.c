#include <stdio.h>
#include <string.h>

int compare(char first_noun[],char second_noun[]);

int main(){
    char first_noun[20];
    char second_noun[20];

    printf("Welcome to Madlib!\nThis is your first sentence: 'What came first, the ... or the ...'");
    printf("\n\nInput a noun for the first word: ");
    scanf("%s",first_noun);

    printf("\nInput a noun for the second word: ");
    scanf("%s",second_noun);

    printf("\nThis is your sentence:\n'What came first, the %s or the %s\n",first_noun,second_noun);
    
    if (compare(first_noun,second_noun)){
        printf("\nCongrats, you get it right!\n");
    }
    else{
        printf("\nYou didn't get it, try again!\n");
    }
    return 0;
}

int compare(char first_noun[],char second_noun[]){ //comparação de string
    int var = strcmp(first_noun, "chicken");
    int var2 = strcmp(second_noun,"chick");
    
    if ((var && var2) == 0){
        return 1;
    }
    
    return 0;
}