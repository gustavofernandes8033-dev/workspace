/*
  uma sala contem 5 alunos
  cada aluno tem um numero de 1 - 100
  programa que recebe 5 numeros e mostre o maior
*/
const {gets, print, entradas }= require('./funcoes-auxiliares.js'); 


let maiorNumero = 0;
let numeroAtual = 0;

  
for(i = 0; i < entradas.length; i++)
{

  numeroAtual = entradas[i]
  
  if(numeroAtual > maiorNumero)
  {
    maiorNumero = numeroAtual;
  }
}

console.log(maiorNumero);
