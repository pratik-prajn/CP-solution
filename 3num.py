t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=list(map(int,input().split()))
    
    
    ind=[]
    
    days=0
    temp=a[0]
    for i in range(1,n):
        if i not in ind:
            days+=max(a[i],temp)   
            temp=max(a[i],temp) 
    i=a.index(max(a))
    ind.append(i)
    temp2=b[0]
    for j in range(1,n):
        if j not in ind:
            days+=max(b[j],temp2)   
            temp=max(b[j],temp2) 
    
    temp2=b[0]
    for j in range(1,n):
        if j not in ind:
            days+=max(b[j],temp2)   
            temp=max(b[j],temp2) 
    ii=b.index(temp2)
    ind.append(ii)
    
    
    
    temp3=c[0]
    for j in range(1,n):
        if j not in ind:
            days+=max(c[j],temp3)   
            temp=max(c[j],temp3) 
    iii=b.index(temp3)
    ind.append(iii)