/**Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias. */
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var value = parseInt(lines.shift());

console.log(value);

var nota100 = value/100;
console.log(Math.floor(nota100), 'nota(s) de R$ 100,00');
value = value%100;
var nota50 = value/50;
console.log(Math.floor(nota50), 'nota(s) de R$ 50,00');
value = value%50;
var nota20 = value/20;
console.log(Math.floor(nota20), 'nota(s) de R$ 20,00');
value = value%20;
var nota10 = value/10;
console.log(Math.floor(nota10), 'nota(s) de R$ 10,00');
value = value%10;
var nota5 = value/5;
console.log(Math.floor(nota5), 'nota(s) de R$ 5,00');
value = value%5;
var nota2 = value/2;
console.log(Math.floor(nota2), 'nota(s) de R$ 2,00');
value = value%2;
var nota1 = value;
console.log(Math.floor(nota1), 'nota(s) de R$ 1,00');
