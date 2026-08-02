class Pessoa{
  nome;
  idade;
  constructor(nome, idade){
    this.nome = nome;
    this.idade = idade;
  }

  DescreverSe(){
    console.log(`Meu nome é ${this.nome} e tenho ${this.idade} anos`)
  }

}
const p1 = new Pessoa('vitor', 40);
const p2 = new Pessoa('carlos', 30);
function compararPessoas(p1, p2) {
  if (p1.idade > p2.idade)
  {
    console.log(`${p1.nome} é mais velho`);
  }
  else
  {
    console.log(`${p2.nome} é mais velho`);

  }
  

}

compararPessoas(p1, p2)
