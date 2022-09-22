#include <stdio.h>
#include <string.h>

int main()
{

  char i[15] = "teste";
  char j[15] = "eita";
  char save[15];

  printf("i = %s\n", i);
  printf("j = %s\n", j);

  strcpy(save, i);
  strcpy(i, j);
  strcpy(j, save);

  printf("\ni = %s\n", i);
  printf("j = %s\n", j);

  return 0;
}

/*
Não se pode simplesmente trocar as strings nesse tipo de ocasião,
é necessário utilizar a função strcpy que faz essa mudança
*/