# 1043 - Triângulo
import math
a,b,c = map(float,input().split())
if abs(b-c)<a<b+c and abs(a-c)<b<a+c and abs(a-b)<c<a+b:
    perimetro = a+b+c
    print('Perimetro = {:.1f}'.format(perimetro))
else:
    area = ((a+b)*c)/2
    print('Area = {:.1f}'.format(area))
