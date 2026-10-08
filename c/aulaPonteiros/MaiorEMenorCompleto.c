#include <stdio.h>
#include <stdlib.h>

 // escrever procedimento que receba um vetor inteiro, seu tamanho, 
 // e os endereços de duas varaiveis inteiras, menor e a maior, 
 // salve nestas variaveis o menor e o maior valor do vetor
 //
 //

void acharMaiorEMenor(int vet[], int tam, int *maiorTemp, int *menorTemp){
  maiorTemp = &vet[0];
  menorTemp = &vet[0];
  for (int i = 1; i < tam ; i++) {
    if(maiorTemp > (vet + i))
    {}
    else{
      maiorTemp = (vet + i);
    }
  }
  for (int i = 1; i < tam ; i++) {
    if(menorTemp < (vet + i))
    {}
    else{
      menorTemp = (vet + i);
    }
  }
  }
  
int main(){

  int vet[6] = {405,68,12,48,99,20000};

  acharMaiorEMenor(vet, 6,);

  printf("%d\n", maiorTemp);
  printf("%d\n", menorTemp);




}

