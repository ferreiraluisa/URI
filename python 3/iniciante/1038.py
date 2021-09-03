#1038 - Lanche
cod , quant = map(int,input().split())
if cod==1:
    total = quant * 4.0
elif cod==2:
    total = quant * 4.5
elif cod==3:
    total = quant * 5.0
elif cod==4:
    total = quant * 2.0
else:
    total = quant * 1.5

print('Total: R$ {:.2f}'.format(total))
