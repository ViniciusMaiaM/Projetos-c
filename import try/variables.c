#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

/*
Classificação de funções/variaveis:
    void (Séria um espaço vazio, nesse tipo de funcão não necessariamente precisa de um retorno)

    char (Um único caracter / %c ):
      char v[] = "eita" (cria um array de caracteres/%s)

      char v = 100 (char podem representar valores numericos de -128 até 127 / %d para representar o valor númerico ou %c para representar o seu valor na tabela ascii / possui 7 bits para o valor e 1 de sinal)

      unsigned char v = 255 (Nessa representação se pode ir até o número 255, nela o bit de sinal é desprezando e são utilizados os 8 bits para a representação do valor.)

    int (%d / 4 bytes / -2147483648 até 2147483647):
      unsigned int v = 4294967295 (%u / 4 bytes / 0 até 4294967295)

      long long int v = (8 bytes / 9 quintilhões negativo e positivo / %lld)
      unsigned long long int v = (18 quintilhões / %llu)

      short int v ou short v = 32767 (2 bytes / -32768 até 32767)
      unsigned short int v  = 65535 (2 bytes / 0 até 65535)

    float (%f / 4 bytes / 32 bits de precisão)

    dooble (%lf / 8 bytes / 64 bits de precisão)

    Pode declarar o tipo da variavel e inicializar ela depois:
      int v; (Declarando)
      v = 1234; (Inicializando)

    constant = valor fixo que não pode ser durante a execução do programa

scanf(Leitura de dados inseridos / não consegue ler após espaços em branco)
fgets (Faz a leitura com os espaços em brancos)
*/

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
