#!/usr/bin/python3

import sys

if __name__ == "__main__":
    number = len(sys.argv) - 1

    result = 0
    for i in range(1, number + 1):
        result += int(sys.argv[i])
    print(result)
