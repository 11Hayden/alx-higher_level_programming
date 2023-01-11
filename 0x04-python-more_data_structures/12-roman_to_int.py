#!/usr/bin/python3

def roman_to_int(roman_string):
    if not roman_string or type(roman_string) != str:
        return 0
    Dict = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    num = 0
    for x in range(len(roman_string)):
        if x > 0 and Dict[roman_string[x]] > Dict[roman_string[x - 1]]:
            num += Dict[roman_string[x]] - (2 * Dict[roman_string[x - 1]])
        else:
            num += Dict[roman_string[x]]
    return num
