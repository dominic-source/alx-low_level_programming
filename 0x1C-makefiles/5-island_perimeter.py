#!/usr/bin/python3

""" A module with functions to determine

The perimeter of an island

0 represent the water zone
1 represent the land zone

"""


def checkGrid(grid, i, j, unit):
    """ This function determines the value of a grid cell"""

    right, left, top, bottom = 0, 0, 0, 0

    try:
        if j == 0:
            pass
        elif (grid[i][j-1] == unit):
            left = unit
    except IndexError:
        pass
    try:
        if (grid[i][j+1] == unit):
            right = unit
    except IndexError:
        pass
    try:
        if (grid[i+1][j] == unit):
            bottom = unit
    except IndexError:
        pass
    try:
        if i == 0:
            pass
        elif (grid[i-1][j] == unit):
            top = unit
    except IndexError:
        pass
    sides = (unit*4) - (top + bottom + right + left)

    return sides


def island_perimeter(grid):
    """ This function calculates the perimeter of the grid"""

    unit = 1
    perimeter = 0
    for idx, i in enumerate(grid):
        for jdx, j in enumerate(i):
            if j == unit:
                value = checkGrid(grid, idx, jdx, unit)
                print(value)
                if value == unit*4:
                    return value
                else:
                    perimeter += value
    return perimeter
