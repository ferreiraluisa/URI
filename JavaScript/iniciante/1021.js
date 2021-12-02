/**
1021 - Notas e Moedas

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas 
possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

NAO PASSOU!
*/

//var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var value = parseFloat(lines.shift());


var number = value;

console.log('NOTAS: ')

var nota100 = Math.floor(value/100);
console.log(nota100, 'nota(s) de R$ 100.00');
value = value%100;
var nota50 = Math.floor(value/50);
console.log(nota50, 'nota(s) de R$ 50.00');
value = value%50;
var nota20 = Math.floor(value/20);
console.log(nota20, 'nota(s) de R$ 20.00');
value = value%20;
var nota10 = Math.floor(value/10);
console.log(nota10, 'nota(s) de R$ 10.00');
value = value%10;
var nota5 = Math.floor(value/5);
console.log(nota5, 'nota(s) de R$ 5.00');
value = value%5;
var nota2 = Math.floor(value/2);
console.log(nota2, 'nota(s) de R$ 2.00');

value = number - (nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2);
console.log('MOEDAS: ')

var moeda1=Math.floor(value/1);
value=value-moeda1*1;
console.log(moeda1, 'moeda(s) de R$ 1.00');
var moeda50=Math.floor(value/0.5);
value=value-moeda50*0.5;
console.log(moeda50, 'moeda(s) de R$ 0.50');
var moeda25=Math.floor(value/0.25);
value=value-moeda25*0.25;
console.log(moeda25, 'moeda(s) de R$ 0.25');
var moeda10=Math.floor(value/0.1);
value=value-moeda10*0.1;
console.log(moeda10, 'moeda(s) de R$ 0.10');
var moeda5=Math.floor(value/0.05);
value=value-moeda5*0.05;
console.log(moeda5, 'moeda(s) de R$ 0.05');
console.log(Math.floor(value/0.01), 'moeda(s) de R$ 0.01');

