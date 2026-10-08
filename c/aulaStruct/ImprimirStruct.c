#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
  int idade;
  char nome[100];
  char sexo;
};

int main(){
  
  struct Pessoa pessoa;
  printf("digite seu nome ");
  fgets(pessoa.nome,100,stdin);
  printf("digite idade ");
  scanf("%d", &pessoa.idade);
  printf("Digite f ou m para o sexo ");
  scanf(" %c", &pessoa.sexo);
  
  printf("Nome: %s\n", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Sexo: %c\n", pessoa.sexo);


  return 0;
}
