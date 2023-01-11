#!/usr/bin/python3

def uniq_add(my_list=[]):
    nl = set(my_list)
    total = 0
    for x in nl:
        total += x
    return total
