t = int(input())
while(t):
    a, b, x = map(int, input().split())
    if(a > b):
        a, b = b, a
    ans = b - a
    tmp = 0
    for i in range(60, -1, -1):
        if(1 & (a^b)>>i):
            if(tmp + (1 << i) <= x):
                if(1 & (a >> i) == 0):
                    if(1 << (1 + i) <= ans):
                        tmp += (1 << i)
                        ans -= (1 << (1 + i))
 
    print(ans)
    t -= 1