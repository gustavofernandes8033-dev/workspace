//todo 
// programa para calcular valor de uma viagem.
/*

3 variaveis
1 - preco do combustivel
2 - gasto do combustivel por KM
3 - distancia em KM da viagem


*/
const precoCombustivel  = 5.79
const kmPorLitro = 10;
let distanciaKM = 100;

console.log("o preço do combustivel será " + precoCombustivel + " Reais");
console.log("o gasto por kilometro será " + kmPorLitro);
console.log("A distancia será de " + distanciaKM + " kilometros.");


let litroConsumido= distanciaKM/kmPorLitro ;
let precoGasto = litroConsumido  * precoCombustivel;

console.log("o valor total é de " + precoGasto.toFixed(2) + " Reais")
console.log("teste")

