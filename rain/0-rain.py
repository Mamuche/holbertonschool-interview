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
    left = 0
    n = len(walls)

    while left < n:
        if walls[left] == 0:
            left += 1
            continue

        right = left + 1
        while right < n and walls[right] == 0:
            right += 1

        if right < n:
            height = min(walls[left], walls[right])
            count = right - left - 1
            water += height * count

        left = right

    return water
