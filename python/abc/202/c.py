n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

cnt = 0

bc = []
for i in range(n):
    bc.append(b[c[i] - 1])

for i in range(n):
    if a[i] == bc[i]:
        cnt += 1

print(cnt)
