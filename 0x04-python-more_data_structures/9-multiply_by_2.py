#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    b_dict = {}
    for x in a_dictionary:
        b_dict[x] = a_dictionary[x] * 2
    return b_dict
