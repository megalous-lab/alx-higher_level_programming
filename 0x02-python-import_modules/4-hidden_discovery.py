#!/usr/bin/python3

import hidden_4

if __name__ == "__main__":

    name = dir(hidden_4)
    for names in name:
        if names[:2] != "__":
            print(names)
