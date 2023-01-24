#!/usr/bin/python3

"""Define a class Square."""


class Square:
    """Reprsents a square."""

    def __init__(self, size=0):
        """Initialize a new square.

        Args:
            size (int): size of the new square.
        """
        self.size = size

    @property
    def size(self):
        """To retrieve it."""
        return(self.__size)

    @size.setter
    def size(self, value):
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """Return the area of a square."""
        return(self.__size * self.__size)

    def my_print(self):
        """Prints a square made up of #."""
        for a in range(0, self.__size):
            [print("#", end="") for b in range(self.__size)]
            print("")
        if self.__size = 0:
            print("")