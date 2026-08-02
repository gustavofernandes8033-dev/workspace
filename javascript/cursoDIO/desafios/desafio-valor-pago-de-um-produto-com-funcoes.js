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
function definirFormaDePagamento(formaDePagamento)
{ 
  return formaDePagamento 

}

function definirPrecoDoProduto (formaDePagamento, precoDoProduto){

  if (formaDePagamento === 'a vista debito') 
  {
    return  precoDoProduto - (precoDoProduto * 0.10);
  }
  else if (formaDePagamento === 'a vista dinheiro/PIX')
  {
    return  precoDoProduto - (precoDoProduto * 0.15);
  }
  else if (formaDePagamento === 'duas vezes')
  {
    return  precoDoProduto;
  }
  else
  {
    return  precoDoProduto + (precoDoProduto * 0.10);
  }
}


(function (){
const fmDePagamento = definirFormaDePagamento('');
const precoFinalCalculado = definirPrecoDoProduto(fmDePagamento, 20);
console.log(fmDePagamento);
console.log(precoFinalCalculado);


})();
