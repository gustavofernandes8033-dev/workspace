#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//um ponteiro é uma variavel que armazena um endereco de memoria de outra variavel

int main(){

  int num = 10;
  int* p;

  p = &num;

  printf("valor de num: %d\n", num);
  printf("endereço de num: %p\n", &num);
  printf("valor de p: %p\n", p);
  printf("valor apontado por p: %d", *p);



  return 0;
}
