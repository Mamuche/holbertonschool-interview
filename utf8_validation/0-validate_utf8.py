#!/usr/bin/python3
"""
Prototype: def validUTF8(data)
Return: True if data is a valid UTF-8 encoding, else return False
A character in UTF-8 can be 1 to 4 bytes long
The data set can contain multiple characters
The data will be represented by a list of integers
Each integer represents 1 byte of data, therefore you only
need to handle the 8 least significant bits of each integer
"""


def validUTF8(data):
    """method that determines if a given data set
        represents a valid UTF-8 encoding."""
    i = 0
    while i < len(data):
        num = data[i]
        if num > 255:
            return False

        if (num >> 7) == 0b0:
            num_bytes = 1
        elif (num >> 6) == 0b110:
            num_bytes = 2
        elif (num >> 5) == 0b1110:
            num_bytes = 3
        elif (num >> 4) == 0b11110:
            num_bytes = 4
        else:
            return False

        for j in range(1, num_bytes):
            if i + j >= len(data):
                return False
            if (data[i + j] >> 6) != 0b10:
                return False

        i += num_bytes

    return True
