a, b, c, d, e = map(int, input().split())
x = a + b + c + d + e
if x < 5:
    print(-1)
elif x % 5 == 0:
    print(x // 5)
else:
    print(-1)