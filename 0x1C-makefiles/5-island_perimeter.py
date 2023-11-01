#!/usr/bin/python3
"""
This module for a island_perimeter() function
that returns the perimeter of the island described
in a grid
"""


def island_perimeter(grid):
    """
    :grid: grid to calculate its premiter
    :returns the perimeter of the island described
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
