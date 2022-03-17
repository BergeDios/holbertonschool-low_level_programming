#!/usr/bin/python3
"""
5-island_perimeter

"""


def island_perimeter(grid):
    """
    finds parameter
    """
    perimetro = 0

    # loop de grid
    for row in range(len(grid)):
        # loop dentro de linea
        for col in range(len(grid[0])):
            # encuentro un 1
            if grid[row][col] == 1:
                # manejando primera linea y vecino de arriba
                if row == 0 or grid[row - 1][col] == 0:
                    perimetro += 1
                # manejando ultima linea y vecino de abajo
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    perimetro += 1
                # manejando primer numero y anterior
                if col == 0 or grid[row][col - 1] == 0:
                    perimetro += 1
                # manejando ultimo numero y siguiente
                if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
                    perimetro += 1
    return perimetro
