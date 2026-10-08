/*
  uma sala contem 5 alunos
  cada aluno tem um numero de 1 - 100
  programa que recebe 5 numeros e mostre o maior
*/
const {gets, print, entradas }= require('./funcoes-auxiliares.js'); 


const quantidadeDeAlunos = gets();
let maiorValorEncontrado = 0;
 
for(i = 0; i < quantidadeDeAlunos; i++)
{
  const numeroSorteado = gets();
  if(numeroSorteado > maiorValorEncontrado){
    maiorValorEncontrado = numeroSorteado
  }
}

console.log(maiorValorEncontrado);
console.log(gets());
console.log(quantidadeDeAlunos);
