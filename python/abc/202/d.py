a, b, k = map(int, input().split())


def dec2bin(t):
    x = []
    while t != 0:
        x.append(t % 2)
        t //= 2
    x.reverse()
    return x
