import math

def solve(n, x):
    ans = 1
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0 and (i * x <= n):
            ans = max(ans, i)
    print(ans)


t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    solve(n, x)


