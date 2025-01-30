#!/usr/bin/python3
"""
Prototype: def rain(walls)
walls is a list of non-negative integers.
Return: Integer indicating total amount of rainwater retained.
Assume that the ends of the list (before index 0 and after
index walls[-1]) are not walls, meaning they will not retain water.
If the list is empty return 0.
"""


def rain(walls):
    """Given a list of non-negative integers representing the heights
    of walls with unit width 1, as if viewing the cross-section of a
    relief map, calculate how many square units of water will be
    retained after it rains."""
    if not walls or len(walls) < 3:
        return 0

    water = 0
    max_height = max(walls)

    for level in range(1, max_height + 1):
        in_wall = False
        count = 0

        for height in walls:
            if height >= level:
                if in_wall:
                    water += count
                    count = 0
                in_wall = True
            elif in_wall:
                count += 1

    return water
