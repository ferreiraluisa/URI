var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var raio = lines.shift();
const pi = 3.14159;

var volume = (4/3) * pi * raio * raio * raio;

console.log('VOLUME =', volume.toFixed(3));