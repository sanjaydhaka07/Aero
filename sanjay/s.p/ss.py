str='my name is sanjay me hi sanjay hu'
s='sanjay'
print(str)
print(s in str)
p=print(str.find(s))
print(str.index(s))
x=p+1
while(x!=-1):
    x=str[x:].find(s)
    x+=1