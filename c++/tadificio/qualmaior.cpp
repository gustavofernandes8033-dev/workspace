#include <cstdio>
#include <iostream>
int main (int argc, char *argv[]) {
  int vetor[] = {4,6,800,2,3000};
  int maiorNum = vetor[0];


 for (int i = 1; i < 4 ; i++) {
   if (maiorNum > vetor[i+1]) {

   }else{
     maiorNum = vetor[i+1];
   }
 } 


 std::cout << maiorNum << std::endl;



  return 0;

}
