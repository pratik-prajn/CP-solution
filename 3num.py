t=int(input())
for i in range(t):
    l=list(map(int,input().split()))
    
    l.sort()
    x=l[0]
    y=l[1]
    
    print(x,y,l[len(l)-1]-x-y)