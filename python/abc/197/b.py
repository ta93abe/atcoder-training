h, w, x, y = map(int, input().split())

x -= 1
y -= 1

s = []
for _ in range(h):
    s.append(input())

left, right, up, down = 0, 0, 0, 0

cnt = 1

l, r, u, d = y - 1, y + 1, x - 1, x + 1
while l >= 0:
    if s[x][l] == '#':
        break
    cnt += 1
    l -= 1

while r <= w - 1:
    if s[x][r] == '#':
        break
    cnt += 1
    r += 1

while u >= 0:
    if s[u][y] == '#':
        break
    cnt += 1
    u -= 1

while d <= h - 1:
    if s[d][y] == '#':
        break
    cnt += 1
    d += 1
print(cnt)
