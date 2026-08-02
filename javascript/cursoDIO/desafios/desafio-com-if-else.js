//todo 
// programa para calcular valor de uma viagem.
/*

5 variaveis

1 - preco do etanol
2 - preco da gasolina
3 - o tipo de combustivel que está no seu carro
4 - gasto do combustivel por KM
5 - distancia em KM da viagem


*/
const tipoDeCombustivelNoMomento = 'gasolina';
const precoGasolina = 6.66;
const precoEtanol= 5.79;
const kmPorLitro = 10;
let distanciaKM = 100;

if (tipoDeCombustivelNoMomento === 'gasolina')
{
  console.log("o preço do combustivel será " + precoGasolina + " Reais");
  console.log("o gasto por kilometro será " + kmPorLitro);
  console.log("A distancia será de " + distanciaKM + " kilometros.");


  let litroConsumido= distanciaKM/kmPorLitro ;
  let precoGasto = litroConsumido  * precoGasolina;
  // algo interessante de notar sobre o java script é:
  // a variavel "precoGasto" só será visivel dentro do escopo deste if.
  // pois uma variavel só é acessivel dentro do escopo onde ela é declarada.
  // tentar acessar a variavel "precoGasto" não seria possivel
  // retornaria um erro como variavel não definida 
  
  console.log("o valor total é de " + precoGasto.toFixed(2) + " Reais") 
  

}

else
{
  console.log('o tipo de combustivel é ' + tipoDeCombustivelNoMomento)
  console.log("o preço do combustivel será " + precoEtanol+ " Reais");
  console.log("o gasto por kilometro será " + kmPorLitro);
  console.log("A distancia será de " + distanciaKM + " kilometros.");


  let litroConsumido= distanciaKM/kmPorLitro ;
  let precoGasto = litroConsumido  * precoEtanol;
  // a variavel precoGasto é declarada aqui, logo será possivel usar ela aqui.
  console.log("o valor total é de " + precoGasto.toFixed(2) + " Reais")


}
