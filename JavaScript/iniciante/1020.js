/**

Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
 */

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var dias = parseInt(lines.shift());

var anos = Math.floor(dias/365);
console.log(anos, 'ano(s)')

dias = dias % 365;

var meses = Math.floor(dias/30);
console.log(meses, 'mes(es)')

dias = dias % 30;
console.log(dias, 'dia(s)')

