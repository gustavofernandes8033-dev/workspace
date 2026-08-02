function calcularIMC(peso, altura){
  return imc = peso / (altura * altura);
}

function classificarIMC(valorIMC){

  if(valorIMC > 30){
    return 'obesidade'
  }
  else if(valorIMC > 25 ){
      return 'sobrepeso'
  }
  else if(valorIMC > 18.5){
    return 'peso normal'
  }
  else{
    return 'abaixo do peso'
  }
  
  
};

(function (){
  const valorIMC = calcularIMC(20, 1.70); 
  const classificacaoIMC = classificarIMC(valorIMC);
  console.log(valorIMC.toFixed(2));
  console.log(classificacaoIMC);
})();

