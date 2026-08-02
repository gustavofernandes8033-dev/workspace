const notas = [];
let somaDasNotas = 0;

notas.push(6);
notas.push(9);
notas.push(2);
notas.push(7);
notas.push(4);

for(let i = 0; i < notas.length; i++)
{
  somaDasNotas += notas[i];
}

const mediaDasNotas = somaDasNotas / notas.length;

console.log(mediaDasNotas);
