#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(void);
void drawn(int choose);

int main (void){
    int x;
    x = dice();
    printf("Your dice is: \n");
    drawn(x);
    return 0;
}


int dice(void){
    int valor_dice;
    srand(time(NULL));
    valor_dice = rand()%6+1;
    return valor_dice;
}

void drawn(int choose){
    switch (choose)
    {
    case 1:
        printf("...........\n");
        printf(".         .\n");
        printf(".    *    .\n");
        printf(".         .\n");
        printf("...........\n");
        break;

    case 2:
        printf("...........\n");
        printf(".*        .\n");
        printf(".         .\n");
        printf(".        *.\n");
        printf("...........\n");
        break;

    case 3:
        printf("...........\n");
        printf(".*        .\n");
        printf(".    *    .\n");
        printf(".        *.\n");
        printf("...........\n");
        break;

    case 4:
        printf("...........\n");
        printf(".  *   *  .\n");
        printf(".         .\n");
        printf(".  *   *  .\n");
        printf("...........\n");
        break;

    case 5:
        printf("...........\n");
        printf(".  *   *  .\n");
        printf(".    *    .\n");
        printf(".  *   *  .\n");
        printf("...........\n");
        break;

    case 6:
        printf("...........\n");
        printf(".  *   *  .\n");
        printf(".  *   *  .\n");
        printf(".  *   *  .\n");
        printf("...........\n");
        break;

    default:
        break;
    }

}