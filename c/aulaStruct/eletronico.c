#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//usando um struct dentro de outro struct

struct Eletronico{
  char tipo[100];
  char marca[50];
  char modelo[25];
  char energia;
  char descricao[500];
  int quantidade;
  int codigo;
};

void imprimirEletronico(struct Eletronico eletro ){
  printf("\tTipo: %s\n", eletro.tipo);
  printf("\tMarca: %s\n", eletro.marca);
  printf("\tModelo: %s\n", eletro.modelo);
  printf("\tEficiencia energetica: %c\n", eletro.energia);
  printf("\tEescricao: %s\n", eletro.descricao);
  printf("\tQuantidade em estoque: %d\n", eletro.quantidade);
  printf("\tCodigo: %d\n", eletro.codigo);


}

//função que le dados de um eletronico e retorna para quem chamou
struct Eletronico lerEletro(){
  struct Eletronico eletron;
  printf("digite o tipo ");
  fgets(eletron.tipo,100,stdin);

  printf("Digite a marca ");
  fgets(eletron.marca,50,stdin);

  printf("Digite modelo ");
  fgets(eletron.modelo,25,stdin);

  printf("Digite a eficiencia energetica ");
  scanf(" %c", &eletron.energia);
  int c;
  while ((c = getchar()) != '\n' && c != EOF);   // descarta o resto da linha

  printf("Digite uma descricao ");
  fgets(eletron.descricao,500,stdin);

  printf("Digite a quantidade e codigo ");
  scanf("%d%d", &eletron.quantidade, &eletron.codigo);



  return eletron;

}

int main(){
  struct Eletronico eletros;

  eletros = lerEletro();
  imprimirEletronico(eletros);

  return 0;
}
