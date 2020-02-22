#!/usr/bin/env python3
"""
Find the number of covered side for grid
"""
def numofneighbour(grid, i, j):
    count = 0

    if (i > 0 and grid[i - 1][j]): 
        count += 1
    if (j > 0 and grid[i][j - 1]):
        count += 1
    if (i < len(grid[i]) -1 and grid[i + 1][j]):
        count += 1
    if (j < len(grid) and grid[i][j + 1]):
        count += 1
    return count

"""
Returns the perimeter of the island described in grid
"""
def island_perimeter(grid):
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j]):
                perimeter += (4 - numofneighbour(grid, i, j))
    return perimeter
