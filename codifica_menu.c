#include <stdio.h>
#include <stdlib.h>

void codifica(FILE *fpent, FILE *fpsai);
void decodifica(FILE *fpent, FILE *fpsai);

int main(){
    FILE *fpent;
    FILE *fpsai;

    int escolha;

    fpent = fopen("entrada.txt","rt");
    fpsai = fopen("codifica.txt","wt");

    if(fpent == NULL){
        printf("Erro de leitura de arquivo");
        exit(1);
    }

    printf("#########################################");
    printf("###        Programa Top Secret        ###");
    printf("#########################################");
    printf("###                                   ###");
    printf("###     1. Codificar mensagem         ###");
    printf("###     2. Decodificar mensagem       ###");
    printf("###     3. Encerrar                   ###");
    printf("###     Escolha seu opção: ");
    scanf("%d",&escolha);
    printf("###                                   ###");
    printf("#########################################");

    switch (escolha)
    {
    case 1:
        codifica(fpent, fpsai);
        break;
    
    case 2:

        break;

    default:
        break;
    }

    fclose(fpent);
    fclose(fpsai);
    

    return 0;
}

void codifica(FILE *fpent, FILE *fpsai){
    char letra = fgetc(fpent);
    while(letra != EOF){
        if (letra >= 'A' && letra <= 'Z'){
            letra += 5;
            if (letra > 90){
                letra = '@' + letra % 90;
            }
        }

        else if (letra >= 'a' && letra <= 'z'){
            letra += 5;
            if (letra > 122){
                letra = '`' + letra % 122;
            }
        }

        else if (letra >= '0' && letra <= '9'){
            letra += 5;
            if (letra > 57){
                letra = '/' + letra % 90;
            }
        }

        fputc(letra,fpsai);
        printf("%c",letra);
        letra = fgetc(fpent);
    }
}