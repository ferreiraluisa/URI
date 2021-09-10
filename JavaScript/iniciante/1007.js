//var input = require('fs').readFileSync('/dev/stdin', 'utf8'); 
var input = require('fs').readFileSync('stdin', 'utf8'); //para funcionar nesse computador 
var lines = input.split('\n');

var A = parseInt(lines.shift());
var B = parseInt(lines.shift());
var C = parseInt(lines.shift());
var D = parseInt(lines.shift());


console.log(`DIFERENCA = ${(A * B - C * D)}`)