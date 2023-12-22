t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    
    
    l=list(map(int,input().split()))
    
    l2=list(map(int,input().split()))
    x = 0
    y = 0
    z = 0
    
    for i in range(n):
        #print(x)
        if(k==i):
            break
        #print(j)
        x+=l[i]
        z = max(z,l2[i])
        #l2=list(map(int,input().split()))
        #l2=list(map(int,input().split()))
        #l2=list(map(int,input().split()))
        y = max(x+(k-i-1)*z , y)
        
    print(y)
        
    
    