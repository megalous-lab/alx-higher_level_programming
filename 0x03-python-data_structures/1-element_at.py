#!/usr/bin/python3
def element_at(my_list, idx):
    if idx < 0:
        return
    elif idx > len(my_list) or idx == 5:
        return
    else:
        return(my_list[idx])
