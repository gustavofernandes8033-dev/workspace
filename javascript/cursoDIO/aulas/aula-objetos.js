//ao declarar um objeto se declara se é uma constante ou não.
//logo em seguida vem seu nome
//após seu nome ser definido, se passa os valores que o objeto guarda, estes valores ficam entre chaves.
//
const vitor = {
  nome: 'Vitor Guerra',
  idade: 25,
  DescrevaSe: function(){
    console.log(`Meu nome é ${this.nome}`) 
  }
};
//
//na linha 8 é declarada uma função dentro do objeto. 
//uma função dentro de um objeto é chamado de método.
//para que se possa usar ${variavel} em um texto é necessário o uso da crase ` `
//após a declaração do objeto é possivel adicionar valores a ele dessa forma:
vitor.altura = 1.49;
console.log(vitor.nome);

console.log(vitor);
console.log(vitor.altura);
vitor.DescrevaSe();
