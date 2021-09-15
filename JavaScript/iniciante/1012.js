var input = require('fs').readFileSync('/dev/stdin', 'utf8');
//var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');


var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());

const pi = 3.14159;

var areaTriangulo = (a*c)/2;
console.log('TRIANGULO:', areaTriangulo.toFixed(3));

var areaCirculo = c * c * pi;  
console.log('CIRCULO:', areaCirculo.toFixed(3));

var areaTrapezio = ((a+b)*c)/2;
console.log('TRAPEZIO:', areaTrapezio.toFixed(3));

var areaQuadrado = b*b;
console.log('QUADRADO:', areaQuadrado.toFixed(3));

var areaRetangulo = a*b;
console.log('RETANGULO:', areaRetangulo.toFixed(3));
