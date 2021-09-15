var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');


var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var c = parseInt(lines.shift());

var maior = (a + b + Math.abs(a-b))/2;

maior = (maior + c + Math.abs(maior-c))/2;

console.log(maior,'eh maior');