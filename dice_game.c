#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(void);
void drawn(int choose);
int player(void);
int pc(void);

int main (void){
    system("cls||clear");
    srand(time(NULL));
    int sum_player = 0;
    int sum_pc = 0;
    sum_player = player();
    sum_pc = pc();
    if (sum_player > sum_pc){
        printf("The player Won with a score of %d points\n",sum_player);
    }
    else if (sum_player < sum_pc){
        printf("The pc Won with a score of %d points\n",sum_pc);
    }
    else{
        printf("Tie!");
    }
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

int player(){
    int sum_player = 0;
    int save;
    printf("It's player time!\n_____________________\n");
    for (int i = 0; i <= 1; i++){
        printf("\nPress enter to play:");
        getchar();
        save = dice();
        drawn(save);
        sum_player += save;
    }
    printf("\nThe Sum of the player's dice is: %d\n",sum_player);
    return sum_player;
}

int pc(){
    int sum_pc = 0;
    int savep;
    printf("\nIt's computer time\n_____________________\n");
    for (int i = 0; i <= 1; i++){
        savep = dice();
        drawn(savep);
        sum_pc += savep;
    }
    printf("\nThe Sum of pc's dice is: %d\n",sum_pc);
    return sum_pc;
}

