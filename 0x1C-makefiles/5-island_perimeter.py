#!/usr/bin/python3
"""
Function to calculate the area of island given a grid
"""


def numofneighbour(grid, i, j):
	"""Find the number of covered side for grid"""

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

def island_perimeter(grid):
	"""Returns the perimeter of the island described in grid"""

	perimeter = 0

	for i in range(len(grid)):
		for j in range(len(grid[i])):
			if (grid[i][j]):
				perimeter += (4 - numofneighbour(grid, i ,j))
	return perimeter
