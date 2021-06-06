n, k = map(int, input().split())
l = [list(map(int, input().split())) for _ in range(n)]
friend = dict()

for a, b in l:
    if a not in friend:
        friend[a] = b
    else:
        friend[a] += b

where = 0

while k > 0:
    where += 1
    k -= 1
    if where in friend:
        k += friend[where]
    print(where, k)

print(where)
