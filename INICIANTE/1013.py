a,b,c=map(int,input().split())
mab=(a+b+abs(a-b))/2
mac=(mab+c+abs(mab-c))/2
print('{:.0f} eh o maior'.format(mac))
