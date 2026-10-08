#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//usando um struct dentro de outro struct

struct DataDeNascimento{
  int dia;
  int mes;
  int ano;
};

struct Pessoa{
  struct DataDeNascimento dataNasc;
  int idade;
  char nome[100];
  char sexo;
};

void imprimirPessoa(struct Pessoa pessoa ){
  printf("Nome: %s\n", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Sexo: %c\n", pessoa.sexo);
  printf("Data de nascimento: %d-%d-%d\n", pessoa.dataNasc.dia,pessoa.dataNasc.mes,pessoa.dataNasc.ano);

}

int main(){
  
  struct DataDeNascimento dataNasc;
  struct Pessoa pessoa;
  printf("digite seu nome ");
  fgets(pessoa.nome,100,stdin);
  printf("digite idade ");
  scanf("%d", &pessoa.idade);
  printf("Digite f ou m para o sexo ");
  scanf(" %c", &pessoa.sexo);
  printf("Digite sua data de nascimento dd mm aaaa ");
  scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes,&pessoa.dataNasc.ano);

  imprimirPessoa(pessoa);
  
 
  return 0;
}
