import math
def gcd(x, y):
    while y:
        x, y = y, x % y
    return x
t=int(input()) 
for i in range(t):
    n,k=map(int,input().split())
    
    a=0
    for i in range(1,math.floor(math.sqrt(n))+1):
        if n%i==0:
            if i*k<=n:
                a=max(a,i)
    print(a)
    
    
    
        
        

        
        
        
        
                

    
        
        
    
    
        
    
            
            
    
        
        
        
    
        
            
        
                 
    
