//essa aula apresenta como exportar e importar arquivos em node.js
//importação e exportação de código é importante para organizar o código
//diminuir a quantidade de linhas em um arquivo pode ajudar a não se perder no código.
//nas linhas a baixo são definidas duas funções: a gets e a print.

const entradas = [5,3,1,4,1,10,8];
let i = 0;
function gets()
{
  const valor = entradas[i];
  i++;
  return valor;

}

function print(texto)
{
  console.log(texto);
}

//no module.exports se define quais funções serão exportadas
//sem o module.exports nada do arquivo pode ser exportado.
module.exports = { gets, print, entradas }
