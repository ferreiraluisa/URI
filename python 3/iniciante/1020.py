n=int(input())
na=n//365
a=n%365
nm=a//30
a=a%30
nd=a
print('{} ano(s)\n{} mes(es)\n{} dia(s)'.format(na,nm,nd))
