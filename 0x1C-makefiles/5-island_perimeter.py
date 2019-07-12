#!/usr/bin/python3
"""find the perimeter"""


def island_perimeter(grid):
    """finds the perimeter using the find the perimeter function"""
    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if (grid[x][y]):
                perimeter += 4
                perimeter -= neighborfinder(grid, x, y)

    return perimeter


def neighborfinder(grid, x, y):
    """finds the number of neighbors"""
    count = 0

    if (x > 0 and grid[x - 1][y] == 1):
        count += 2
    if (y > 0 and grid[x][y - 1] == 1):
        count += 2

    return count
