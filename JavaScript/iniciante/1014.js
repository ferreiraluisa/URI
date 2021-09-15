var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var distancia = lines.shift();
var combustivelGasto = lines.shift();

var kmLitro = distancia/combustivelGasto;

console.log(kmLitro.toFixed(3),'km/l');