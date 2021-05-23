s = input()

ans = ""
for x in s[::-1]:
    if x == "9":
        ans += "6"
    elif x == "6":
        ans += "9"
    else:
        ans += x

print(ans)
