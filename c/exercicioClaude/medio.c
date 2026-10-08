#include <stdio.h>
#include <stdlib.h>
// Médio: Agenda de contatos com arquivo
// O exercício: Crie uma agenda no terminal em que seja 
// possível adicionar, listar, buscar por nome e remover contatos (nome, telefone, e-mail). 
// Os dados devem ser salvos em um arquivo e carregados quando o programa abrir.

struct Telefone{
  int DDD;
  int numero;
};

struct Contato{
  char nome[100];
  struct Telefone tel;
  char email[100];


};


struct Contato lerContato()
{
  struct Contato c;
  struct Telefone t;
  
  printf("Insira o nome do contato");
  fgets(c.nome, 100, stdin);
  printf("Insira o email do contato");
  fgets(c.email, 100, stdin);
  printf("Insira o DDD do telefone do contato");
  scanf("%d", t.DDD;
  printf("Insira o telefone do contato");
  scanf("%d", t.numero;

}
int main(){
  
  


  return 0;
}


