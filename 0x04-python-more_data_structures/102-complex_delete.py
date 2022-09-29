#!/usr/bin/python3

def complex_delete(a_dict, value):

    if a_dict is None:
        return None
    del_key = None
    keys = tuple(a_dict.keys())
    for key in keys:
        if a_dict[key] == value:
            del a_dict[key]
    return a_dict
