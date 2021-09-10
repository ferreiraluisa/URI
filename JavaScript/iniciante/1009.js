var input = require('fs').readFileSync('/dev/stdin', 'utf8'); 
//var input = require('fs').readFileSync('stdin', 'utf8'); //para funcionar nesse computador 
var lines = input.split('\n');

var name = lines.shift();
var salary = parseFloat(lines.shift());
var sells = parseFloat(lines.shift());

var totalSalary = salary + (0.15 * sells);

console.log(`TOTAL = R$ ${totalSalary.toFixed(2)}`);