#!/usr/bin/python3
"""Module contains function definitition for computing
the island perimeter from a grid list"""


def island_perimeter(grid):
    """Funtion that returns the perimeter of the island sent as a
list of lists containing integers"""
    land_count = 0

    for i in grid:
        for j in range(len(i)):
            if i[j] == 1:
                land_count += 1
    perimeter = (land_count * 2) + 2
    return perimeter
