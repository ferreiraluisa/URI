a, b, c = map(float, input().split())
tri=a*c/2
cir=3.14159*c*c
trap=(a+b)*c/2
qua=b*b
ret=a*b
print('TRIANGULO: {:.3f}\nCIRCULO: {:.3f}\nTRAPEZIO: {:.3f}\nQUADRADO: {:.3f}\nRETANGULO: {:.3f}'.format(tri,cir,trap,qua,ret))
