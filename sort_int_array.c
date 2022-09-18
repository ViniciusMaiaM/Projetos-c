#include <stdio.h>

void sort(int list[], int tam);
void print(int list[], int tam);

void sort(int list[], int tam) //Ordenação manual de uma array
{
  for (int i = 0; i < tam - 1; i++){
    for (int j = 0; j < tam - 1; j++){
      if (list[j] > list[j + 1]){
        int save = list[j];
        list[j] = list[j + 1];
        list[j + 1] = save;
      }
    }
  }
}

void showlist(int list[], int tam)
{
  for (int i = 0; i < tam; i++){
    printf("Termo %d = %d\n", i + 1, list[i]);
  }
}

int main(){
  int list[] = {4371, 90, 42, 1, 6, 9, 3, 2, 5, 8, 4, 7}; 
  int tamanho_list = sizeof(list) / sizeof(list[0]); //Declaração do sizeof pra rodar no for
  sort(list, tamanho_list);
  showlist(list, tamanho_list);
  return 0;
}
