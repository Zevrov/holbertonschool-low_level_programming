#!/usr/bin/python3
"""find the perimeter"""

A = 3
B = 5

def island_perimeter(grid):
    """finds the perimeter using the find the perimeter function"""
    perimeter = 0

    for x in range(0, A):
        for y in range(0, B):
            if (grid[x][y]):
                perimeter += (4 - neighborfinder(grid, x, y))

    return perimeter

def neighborfinder(grid, x, y):
    """finds the number of neighbors"""
    count = 0;

    if (x > 0 and grid[x - 1][y]):
        count += 1
    if (y > 0 and grid[x][y - 1]):
        count += 1
    if (x < A - 1 and grid[x + 1][y]):
        count += 1
    if (y < B - 1 and grid[x][y + 1]):
        count += 1

    return count
