#!/usr/bin/python3

def multiple_returns(var):
    return(len(var), var[0] if len(var) != 0 else None)
