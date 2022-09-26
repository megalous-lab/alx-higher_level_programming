#!/usr/bin/python3

def no_c(my_string):
    ret_str = [var for var in my_string if var.lower() != 'c']
    return (''.join(ret_str))
