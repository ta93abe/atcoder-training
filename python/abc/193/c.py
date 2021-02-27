n = int(input())
s = set()

for i in range(2, 11):
    for j in range(2, 11):
        s.add(i ** j)
# cnt = 0
# for i in range(1, n+1):
#     if i not in s:
#         cnt += 1

# print(cnt)
print(s)
print(len(s))
