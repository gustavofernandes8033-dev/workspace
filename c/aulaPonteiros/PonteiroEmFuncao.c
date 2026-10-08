#include <stdio.h>
#include <stdlib.h>

//A seguinte função imprime um valor usando um ponteiro
//o ponteiro
void imprimir (int *num){
  printf("%d\n ", *num);
  *num = 80;

}


void main(){
  char palavra[100];

  int idade = 35;

  printf(" primeiro é impresso o valor 35\n pois é o valor da idade ao chamar a função.\n");
  imprimir(&idade);
  printf("depois é impresso o valor 80\n pois é o valor da idade depois da variavel idade ter passado pela função\n");
  printf("no main %d\n", idade);
}
