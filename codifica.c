#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *fpent;
    FILE *fpsai;

    char letra;

    fpent = fopen("entrada.txt","rt");
    fpsai = fopen("codifica.txt","wt");

    if(fpent == NULL){
        printf("Erro de criação de arquivo");
        exit(1);
    }


    letra = fgetc(fpent);
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

    fclose(fpent);
    fclose(fpsai);
    
    return 0;
}