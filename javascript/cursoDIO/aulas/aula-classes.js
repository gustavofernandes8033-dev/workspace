// aqui voltamos para classes.
// conceito da qual eu tenho mais familiaridade.
// uma classe defini algo geral.
// caracteristicas que algo pode ter
// um carro tem cor, tamanho, peso, caracteristicas.
// mas essas caraceristicas só recebem valores quando instanciamos a classe em um objeto.

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
// até aqui a classe pessoa não recebeu valores
// a classe pessoa é apenas um template, blueprint, um plano para algo que virá depois.
//
const vitor = new Pessoa();
vitor.nome = 'Vitor';
vitor.idade = 26;
vitor.DescreverSe();
//aqui de fato temos a instancia de uma classe do tipo pessoa 
//
const guto = new Pessoa('guto', 2);
guto.DescreverSe();

