// algoritimo que calcule o que deve ser pago por um produto.
//
// Codigo condições de pagamento
//
// - à vista Débito, recebe 10% de desconto;
// - à vista Dinheiro ou PIX, recebe 15% de desconto;
// - Em duas vezes, preço normal da etiqueta sem juros;
// - Em duas vezes, preço normal da etiqueta + 10% de juros;

// possiveis condições da variavel 'formaDePagamento': 
// 'a vista debito'
// 'a vista dinheiro/PIX'
// 'duas vezes'
// 'mais que duas vezes'
const formaDePagamento = 'a vista debito';
const precoDoProduto = '15';

if (formaDePagamento === 'a vista debito') {
  console.log("forma de pagameto: " + formaDePagamento);
  const valorDePagamento = precoDoProduto - (precoDoProduto * 0.10);
  console.log("valor de pagameto: "+ valorDePagamento);
} else if ('a vista dinheiro/PIX'){
  console.log("forma de pagameto: " + formaDePagamento);
  const valorDePagamento = precoDoProduto - (precoDoProduto * 0.15);
  console.log("valor de pagameto: "+ valorDePagamento);
  
}else if('duas vezes'){
  console.log("forma de pagameto: " + formaDePagamento);
  const valorDePagamento = precoDoProduto;
  console.log("valor de pagameto: "+ valorDePagamento);
}else{
  console.log("forma de pagameto: " + formaDePagamento);
  const valorDePagamento = precoDoProduto + (precoDoProduto * 0.10);
  console.log("valor de pagameto: "+ valorDePagamento);
}

