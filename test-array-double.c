#include <stdio.h>

int main()
{
  double test[] = {1.6425, 2.432432426346, 3.298, 4.0, 5.3, 6.412};

  for (int i = 0; i < sizeof(test) / sizeof(test[0]); i++) // sizeof pega o tamanho EM BYTES da lista, neste caso é necessário dividir pelo sizeof(test[0]) quando não se sabe qual será o tamanho da array 
  {
    printf("%.2lf\n", test[i]);
  }

  return 0;
}