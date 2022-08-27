#include <stdio.h> //biblioteca padrão de input
#include <stdlib.h>
#include "variables.h"

int main()
{
  char nome[25];
  int idade;
  float peso;
  tela();
  nome[25] = name();
  idade = id();
  printf("\nOla %s",nome,"sua idade é %d",idade); 
  return 0;
}
