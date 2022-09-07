#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int play (void);
int vitoria (int j1,int j2,int j3);
void final(int x);
void esc (int escolha);

int main(){
    srand(time(NULL));
    int escolha;
    char jogar;
    play();
    printf("\nQuantos jogadores irão jogar?\n");
    scanf("%d",&escolha);
    do{ 
        esc(escolha);
        printf("\nQuer jogar novamente[S/N]? ");
        scanf("%c",&jogar);
        getchar();
        toupper(jogar);
    }while (jogar != "N");
    return 0;
}

int play(void){
    int play;
    play = rand()%2;
    return play;
}


int vitoria(int j1, int j2, int j3){
    if (j1 != j2 && j2 == j3 ){
        return 1;
    }

    else if (j1 != j2 && j1 == j3){
        return 2;
    }

    else if (j1 == j2 && j1 != j3){
        return 3;
    }

    else{
        return 4;
    }
}

void final(int x){
    if (x != 4){
        printf("\nO jogador 1 venceu!\n");
    }
    
    else{
        printf("\nO jogo terminou em empate!\n");
    }
}

void esc (int escolha){
    int j1;
    int j2;
    int j3;
    int cd;
    switch (escolha)
    {
    case 1:
        printf("\nEscolha zero ou um: \n");
        scanf("%d",&j1);
        j2 = play();
        j3 = play();
        cd = vitoria(j1,j2,j3);
        final(cd);
        break;
    
    case 2:
        printf("\nJ1 Escolha zero ou um: \n");
        scanf("\n%d",&j1);
        printf("\nJ2 Escolha zero ou um: \n");
        scanf("\n%d",&j2);
        j3 = play();
        cd = vitoria(j1,j2,j3);
        final(cd);
        break;

    case 3:
        printf("\nJ1 Escolha zero ou um: \n");
        scanf("%d",&j1);
        printf("\nJ2 Escolha zero ou um: \n");
        scanf("%d",&j2);
        printf("\nJ3 Escolha zero ou um: \n");
        scanf("%d",&j3);
        cd = vitoria(j1,j2,j3);
        final(cd);

    default:
        break;
    }
}