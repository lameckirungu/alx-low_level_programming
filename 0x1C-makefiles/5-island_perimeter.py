#!/usr/bin/python3
"""
5-island_perimeter module
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the given grid.

    Args:
        grid (list of list of int (2D Array)): The grid representing the map with 0 (water) and 1 (land).

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0
    rows = len(grid)

    """ Calculates the length of the first sublist rep the first row in the grid list.
    if rows is 0, grid is empty, therefore 0 columns.
    """
    cols = len(grid[0]) if rows > 0 else 0
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                #check the cell above
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                #check the cell below
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                #check the cell to the left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                #check the cell to the right
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
