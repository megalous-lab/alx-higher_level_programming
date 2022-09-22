#!/usr/bin/python3
import sys

n = len(sys.argv)

if __name__ == "__main__":

    if len(sys.argv) == 1:
        print("0 arguments.")

    elif len(sys.argv) == 2:
        print((len(sys.argv) - 1), "argument:")
        for x in range(1, n):
            print("{:d}:".format(x), sys.argv[x])

    else:
        print((len(sys.argv) - 1), "arguments:")
        for x in range(1, n):
            print("{:d}:".format(x), sys.argv[x])
