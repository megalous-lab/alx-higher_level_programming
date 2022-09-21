#!/usr/bin/python3
for var in range(ord('z'), ord('a') - 1, -1):
    if var % 2 == 1:
        var -= (ord('a') - ord('A'))
    print("{:c}".format(var), end='')
