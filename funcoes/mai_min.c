#include <stdio.h>
#include <ctype.h>
#include <string.h>

char mai_min(char letra);

int main(){

    char digi;

    printf("Insira um caracter: ");
    scanf("%c",&digi);

    digi  = mai_min(digi);

    printf("\n%c\n",digi);

    return 0;
}

char mai_min(char letra){

    if (letra >= 'a' && letra<='z'){
        return letra -32;
    }
    return letra + 32;
}

// strcmp compara strings