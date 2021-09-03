# 1042 - Sort Simples
a,b,c = map(int,input().split())
if a>b>c:
    print('{}\n{}\n{}\n\n{}\n{}\n{}'.format(c,b,a,a,b,c))
elif a>c>b:
    print('{}\n{}\n{}\n\n{}\n{}\n{}'.format(b, c, a, a, b, c))
elif b>a>c:
    print('{}\n{}\n{}\n\n{}\n{}\n{}'.format(c, a, b, a, b, c))
elif b>c>a:
    print('{}\n{}\n{}\n\n{}\n{}\n{}'.format(a, c, b, a, b, c))
elif c>b>a:
    print('{}\n{}\n{}\n\n{}\n{}\n{}'.format(a, b, c, a, b, c))
elif c>a>b:
    print('{}\n{}\n{}\n\n{}\n{}\n{}'.format(b, a, c, a, b, c))
