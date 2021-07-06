n=float(input())

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

a=n-(n100*100+n50*50+n20*20+n10*10+n5*5+n2*2)

m1=a//1
a=a-m1*1

m5=a//0.5
a=a-m5*0.5

m25=a//0.25
a=a-m25*0.25

m10=a//0.10
a=a-m10*0.1

m05=a//0.05
a=a-m05*0.05

m01=a/0.01

print('NOTAS:\n{:.0f} nota(s) de R$ 100.00'.format(n100))
print('{:.0f} nota(s) de R$ 50.00'.format(n50))
print('{:.0f} nota(s) de R$ 20.00'.format(n20))
print('{:.0f} nota(s) de R$ 10.00'.format(n10))
print('{:.0f} nota(s) de R$ 5.00'.format(n5))
print('{:.0f} nota(s) de R$ 2.00'.format(n2))
print('MOEDAS:\n{:.0f} moeda(s) de R$ 1.00'.format(m1))
print('{:.0f} moeda(s) de R$ 0.50'.format(m5))
print('{:.0f} moeda(s) de R$ 0.25'.format(m25))
print('{:.0f} moeda(s) de R$ 0.10'.format(m10))
print('{:.0f} moeda(s) de R$ 0.05'.format(m05))
print('{:.0f} moeda(s) de R$ 0.01'.format(m01))
