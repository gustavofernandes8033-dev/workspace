#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// quando criamos um struct, a grosso modo, estamos criando um novo tipo de dado
// da mesma forma que normalmente um número é do tipo int (inteiro), uma pessoa
// pode ser do tipo pessoa no código

typedef struct { 
  int idade;
  char sexo;
  char nome[100];
}Pessoa;

struct Pessoa2{
  int idade;
  char sexo;
  char nome[100];
};

int main()
{
  Pessoa pessoa1;
  struct Pessoa2 pessoa2;

  pessoa1.idade = 15;
  pessoa2.idade = 24;
  pessoa2.sexo = 'f';
  strcpy(pessoa2.nome,"Maria");

  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Sexo: %c\n", pessoa2.sexo);

  return 0;
}
