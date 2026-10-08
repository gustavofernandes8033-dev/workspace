#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 100, *b, **c;
  b = &a;
  c = &b;

  // a variavel c é um ponteiro que aponta para outro ponteiro,
  // por isso é usado "**c"

  printf("Valor de a: %d\n", a);
  printf("Valor apontado por b: %d\n", *b);
  printf("Valor apontado por c: %d", **c);

  return 0;


}

