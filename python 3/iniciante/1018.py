n=int(input())
n100=n//100
a=n%100
n50=a//50
a=a%50
n20=a//20
a=a%20
n10=a//10
a=a%10
n5=a//5
a=a%5
n2=a//2
a=a%2
n1=a
print('{}'.format(n))
print('{} nota(s) de R$ 100,00'.format(n100))
print('{} nota(s) de R$ 50,00'.format(n50))
print('{} nota(s) de R$ 20,00'.format(n20))
print('{} nota(s) de R$ 10,00'.format(n10))
print('{} nota(s) de R$ 5,00'.format(n5))
print('{} nota(s) de R$ 2,00'.format(n2))
print('{} nota(s) de R$ 1,00'.format(n1))
