#!/usr/bin/python3
"""Module contains function definitition for computing
the island perimeter from a grid list"""


def island_perimeter(grid):
    """Funtion that returns the perimeter of the island sent as a
list of lists containing integers"""
    land_count = 0
    non_edge = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                land_count += 1
                if i > 0 and grid[i - 1][j] == 1:
                    non_edge += 1
                if j > 0 and grid[i][j - 1] == 1:
                    non_edge += 1

    if land_count == 0:
        return 0
    perimeter = (land_count * 4) - (non_edge * 2)
    return perimeter
