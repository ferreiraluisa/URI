#1036 - Fórmula de Bhaskara
from math import sqrt
a, b, c = map(float, input().split())
delta = (b*b)-(4*a*c)
if delta>=0:
    d = sqrt(delta)
    if(a==0):
        print('Impossivel calcular')
    else:
        raiz1 = (-b+d)/(2*a)
        raiz2 = (-b-d)/(2*a)
        print('R1 = {:.5f}'.format(raiz1))
        print('R2 = {:.5f}'.format(raiz2))
else:
    print('Impossivel calcular')
