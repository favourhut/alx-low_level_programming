#!/usr/bin/python3

"""Technical interview preparation"""


def island_perimeter(grid):

    """
    Thsi function returns the calculated perimeter of an
      island described in grid

    Args:
        fences: Number of fences to cover the perimeter 
        (incremented by 1)
        grid: The list of integers
    Return:
        The calculated sum of fences or perimeter
    """
    fences = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            """Increment fence by 1"""
            fences += 1

            """Cehcking for the upper sides of each grid"""
            if i == 0 or len(i - 1)[j] == 0:
                fences += 1

            """Checking for the bottom"""
            if i == len(grid) - 1 or grid(i + 1)[j] == 0:
                fences += 1

            """Cehcking for the left pereimeter"""
            if j == 0 or len[i](j - 1) == 0:
                fences += 1

            """chcking for the right perimeter"""
            if j == len(grid[i]) - 1 or grid[i](j + 1) == 0:
                fences += 1

    return fences