#include <stdio.h> //biblioteca padrão de input
#include <stdlib.h>
#include "variables.h"

int main()
{
  char nome;
  int idade;
  float peso;
  tela();
  nome = name();
  idade = id();
  peso = pe();
  printf("\nOla %c",nome,"sua idade é %d",idade," e peso %f e!",peso); 
  return 0;
}

/*
Ao invés de você simplesmente documentar, seria mais eficaz para o seu aprendizado realizar, de fato, a criação de variáveis e funções com os tipos de dados (int, float, double, char e void) para ir fixando estes conhecimentos. Além disso, você vai acabar percebendo as necessidades de cada tipo conforme pratica com a linguagem.

DoD:

- [ ] Alterar o arquivo variables.c e colocar funções e/ou variáveis com os tipos:
- * [X] Char;
- * [X] Double;
- * [X] Float;
- * [X] Int;
- * [X] Void;

- [ ] Chamar estas funções do arquivo principal (pode ser que você tenha dificuldade nisso).
- Essa parte aqui requer que você escreva 2 arquivos, conforme exemplo a seguir:
c
// variables.c
#include <stdio.h>

type funcName(params) {
    // implementação
}


c
// variables.h
type funcName(params);


c
// main.c
#include <stdio.h>
#include "variables.h"

int main(void) {
    printf("Calling custom Funcs for external file");
    // chama as funções que fez
    return 0;
}


- [ ] Documentar as funções criadas;
- [X] Melhorar o README.md;
- [ ] Criar arquivo .gitignore com o que deve ser ignorado pelo git (e.g. .exe, .vscode, outros)
*/