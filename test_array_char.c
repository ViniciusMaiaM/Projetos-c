#include<stdio.h>

int main(){

  char nomes[][10] = {"nome","nome3","sapio","piudas"}; // Determina uma array para o char e o segundo [] determina o tamanho de cada item da array

  for(int i = 0; i < sizeof(nomes)/sizeof(nomes[0]);i++)
  {
    printf("%s\n",nomes[i]);
  }

  return 0;
}
