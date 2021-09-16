/**Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos. */
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var segundos = parseInt(lines.shift());

var hora = Math.floor(segundos/3600);

segundos = segundos % 3600;

var minutos = Math.floor(segundos/60);

segundos = segundos % 60;

console.log(`${hora}:${minutos}:${segundos}`);