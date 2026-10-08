#include <stdio.h>
#include <stdlib.h>

void imprimir(int vet[], int tam){
  int i = 0;

  for (i = 0; i < tam;i++) {
    printf("%d\n", *(vet + i));
  }
}

int main(void)
{
  int vet[5] = {1,2,3,4,5};


  imprimir(vet, 5);


  return EXIT_SUCCESS;
}

