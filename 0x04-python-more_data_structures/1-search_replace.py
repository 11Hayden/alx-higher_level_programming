#!/usr/bin/python3

def search_replace(my_list, search, replace):
    nl = []
    for a in range(len(my_list)):
        if my_list[a] == search:
            nl.append(replace)
        else:
            nl.append(my_list[a])
    return my_list
