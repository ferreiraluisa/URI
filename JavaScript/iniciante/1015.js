var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var line1 = lines.shift().split(' ');
var line2 = lines.shift().split(' ');

var x1 = line1.shift();
var y1 = line1.shift();
var x2 = line2.shift();
var y2 = line2.shift();

var distancia = Math.sqrt(Math.pow(x2-x1,2) + Math.pow(y2-y1,2));

console.log(distancia.toFixed(4));