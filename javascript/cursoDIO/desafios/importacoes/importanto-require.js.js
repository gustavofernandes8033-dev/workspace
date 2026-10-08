//para importar um arquivo em node.js se cria uma variavel constante, se nomeia a variavel (ou não)
//e passamos o caminho do arquivo que se deseja importar.
const funcoes = require('./funcoes-auxiliares.js');
const {gets, print }= require('./funcoes-auxiliares.js'); 

// é possivel passar o valor atual do gets para uma variavel de forma simples.
const valorDoGets =gets();
const segundoValorDoGets =gets();
const TerceiroValorDoGets =gets();
console.log('teste');
