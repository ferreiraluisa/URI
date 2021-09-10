var input = require('fs').readFileSync('/dev/stdin', 'utf8'); 
//var input = require('fs').readFileSync('stdin', 'utf8'); //para funcionar nesse computador 
var lines = input.split('\n');

var line1 = lines.shift();
var line2 = lines.shift();

var palavras = line1.split(' ');

var codigo1 = palavras.shift();
var quantidade1 = parseFloat(palavras.shift());
var preco1 = parseFloat(palavras.shift());

palavras = line2.split(' ');

var codigo2 = palavras.shift();
var quantidade2 = parseFloat(palavras.shift());
var preco2 = parseFloat(palavras.shift());

var total = (preco1 * quantidade1) + (preco2 * quantidade2);

console.log(`VALOR A PAGAR: R$ ${total.toFixed(2)}`);

