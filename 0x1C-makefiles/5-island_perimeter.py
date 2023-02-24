#!/usr/bin/python3

def island_perimeter(grid):
    """
    return perimeter of island described in grid

    grid[i][y]
    one cell is a square with side length 1
    0 rep water zone
    1 rep land zone
    """
    
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if (grid[i][j] == 1):
                perimeter += 4
                if (i > 0 and grid[i - 1][j]):
                    perimeter -= 2
                if (j > 0 and grid[i][j - 1]):
                    perimeter -= 2
    return perimeter
