#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(void);
void drawn(int choose);
int player(void);
int pc(void);

int main (void){
    return 0;
}


int dice(void){
    int value_dice;
    value_dice = rand()%6+1;
    printf("\nThe value of the dice is: %d\n",value_dice);
    return value_dice;
}

void drawn(int choose){ 
    switch (choose)
    {
    case 1:
        printf("\n...........\n");
        printf(".         .\n");
        printf(".    *    .\n");
        printf(".         .\n");
        printf("...........\n");
        break;

    case 2:
        printf("\n...........\n");
        printf(".*        .\n");
        printf(".         .\n");
        printf(".        *.\n");
        printf("...........\n");
        break;

    case 3:
        printf("\n...........\n");
        printf(".*        .\n");
        printf(".    *    .\n");
        printf(".        *.\n");
        printf("...........\n");
        break;

    case 4:
        printf("\n...........\n");
        printf(".  *   *  .\n");
        printf(".         .\n");
        printf(".  *   *  .\n");
        printf("...........\n");
        break;

    case 5:
        printf("\n...........\n");
        printf(".  *   *  .\n");
        printf(".    *    .\n");
        printf(".  *   *  .\n");
        printf("...........\n");
        break;

    case 6:
        printf("\n...........\n");
        printf(".  *   *  .\n");
        printf(".  *   *  .\n");
        printf(".  *   *  .\n");
        printf("...........\n");
        break;

    default:
        break;
    }

}
