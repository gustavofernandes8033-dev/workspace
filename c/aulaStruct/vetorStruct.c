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

//função que le dados de pessoa e retorna para quem chamou
struct Pessoa lerPessoa(){
  struct Pessoa p;
  struct DataDeNascimento dtaNsc;
  printf("digite seu nome ");
  fgets(p.nome,100,stdin);
  printf("digite idade ");
  scanf("%d", &p.idade);
  printf("Digite f ou m para o sexo ");
  scanf(" %c", &p.sexo);
  printf("Digite sua data de nascimento dd mm aaaa ");
  scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes,&p.dataNasc.ano);

  return p;


}

int main(){
  struct Pessoa pessoas[10];

  for (int i; i < 3; i++) {
    pessoas[i] = lerPessoa();
  
  }
  for (int i; i < 3; i++) {
    imprimirPessoa(pessoas[i]);
  }
  
  return 0;
}
