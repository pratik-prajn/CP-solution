from collections import defaultdict

def main():
    t = int(input())
    
    for _ in range(t):
        z = int(input())
        a = list(map(int, input().split()))
        m = defaultdict(int)
        
        for i in range(z):
            m[a[i]] += 1
        
        sum_val = 0
        for i in range(31):
            sum_val += 2 ** i
        
        ans = 0
        for i in range(z):
            if m[sum_val - a[i]] != 0 and m[a[i]] != 0:
                ans += 1
                m[sum_val - a[i]] -= 1
                m[a[i]] -= 1
        
        print(z - (2 * ans) + ans)

if _name_ == "_main_":
    main()