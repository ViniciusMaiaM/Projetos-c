#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

void tela(void)
{
  printf("-------------------------\n");
  printf("---------Layout----------\n");
  printf("-------------------------\n");
}

char name()
{
  char name[25];
  printf("Qual o seu nome?\n");
  // scanf(" %s",name);
  fgets(name, 25, stdin);
  return name;
}

int id()
{
  int idade;
  printf("Qual a sua idade?\n");
  scanf("%d", idade);
  return idade;
}

float pe()
{
  float peso;
  printf("Qual o seu peso?\n");
  scanf("%f", peso);
  return peso;
}

double pi()
{
  double vpi;
  printf("Insira o valor de PI\n");
  scanf("%lf", vpi);
  return vpi;
}
