#!/usr/bin/python3
larg = 0

for a in range(999, 99, -1):
    for b in range(999, 99, -1):
        res = a * b
        res = str(res)
        if (res == res[::-1]):
            res = int(res)
            if (res > larg):
                larg = res

print (larg)
