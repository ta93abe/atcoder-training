n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

mi = max(a)
ma = min(b)

print(max(0, ma - mi + 1))
