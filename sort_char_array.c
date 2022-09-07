#include <stdio.h>

//Mesma estrutura do outro arquivo sort-array, mas com char

void sort(char list[], int tam);
void print(char list[], int tam);

void sort(char list[], int tam) // Ordenação manual de uma array
{
  for (int i = 0; i < tam - 1; i++)
  {
    for (int j = 0; j < tam - 1; j++)
    {
      if (list[j] > list[j + 1])
      {
        int save = list[j];
        list[j] = list[j + 1];
        list[j + 1] = save;
      }
    }
  }
}

void showlist(char list[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    printf("Termo %d = %c\n", i + 1, list[i]);
  }
}

int main()
{

  char list[] = {'C', 'M', 'F', 'L', 'Z', 'B', 'A'};
  int tamanho_list = sizeof(list) / sizeof(list[0]); // Declaração do sizeof pra rodar no for
  sort(list, tamanho_list);
  showlist(list, tamanho_list);
  return 0;
}
