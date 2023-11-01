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
    premiter = 0
    for i, row in enumerate(grid):
        for j, element in enumerate(row):
            if element == 1:
                if row[j + 1] == 0:
                    premiter += 1
                if j != 0 and row[j - 1] == 0:
                    premiter += 1
                if grid[i - 1][j] == 0:
                    premiter += 1
                if grid[i + 1][j] == 0:
                    premiter += 1
    return (premiter)
