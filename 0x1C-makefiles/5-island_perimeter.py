#!/usr/bin/python3
"""This is a function 'def island_perimeter(grid):' that returns the
perimeter of the island described in grid."""

def island_perimeter(grid):
    """The function that returns the perimiter of the island."""
    height = len(grid)
    width = len(grid[0])
    size = 0
    edge = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edge += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edge += 1
    return ((size * 4) - (edge * 2))
