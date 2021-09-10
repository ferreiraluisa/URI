var input = require('fs').readFileSync('/dev/stdin', 'utf8'); 
//var input = require('fs').readFileSync('stdin', 'utf8'); //para funcionar nesse computador 
var lines = input.split('\n');

var number = parseInt(lines.shift());
var numberWorkedHours = parseInt(lines.shift());
var salaryPerHour = parseFloat(lines.shift());

var salary = numberWorkedHours * salaryPerHour;

console.log(`NUMBER = ${number}\nSALARY = U$ ${salary.toFixed(2)}`);