#!/usr/bin/python3
"""5-island_perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    r = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for p, q in enumerate(grid):
        for t, s in enumerate(q):
            if s == 1:
                if p == 0 or grid[p - 1][t] != 1:
                    r += 1
                if t == 0 or grid[p][t - 1] != 1:
                    r += 1
                if t == width or grid[p][t + 1] != 1:
                    r += 1
                if p == length or grid[p + 1][t] != 1:
                    r += 1
    return r
