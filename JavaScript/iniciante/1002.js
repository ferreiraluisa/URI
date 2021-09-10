var input = require('fs').readFileSync('/dev/stdin', 'utf8'); 
//var input = require('fs').readFileSync('stdin', 'utf8'); //para funcionar nesse computador 
var lines = input.split('\n');

const n = 3.14159;

var raio = parseFloat(lines.shift());

var area = n * (raio*raio);

console.log(`A=${area.toFixed(4)}`);

