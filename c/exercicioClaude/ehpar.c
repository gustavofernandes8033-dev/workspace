#include <stdio.h>
bool ehPar(numero){
  float resultado;
  resultado = numero % 2;
  if(resultado = 0 ) {
    return true;
  } else {
    return false;
  }


}

int main (){
  int numero;
  bool par;
  printf("escreva um numero");

  scanf("%d", &numero);

  printf(ehPar(numero));



  return 0;
}

