#!/usr/bin/python3

""" calculate island perimeters"""
def island_perimeter(grid):
    """ find the perimeter of an island"""
    if not grid:
        return
    if grid == []:
        return
    perimeter = 0
    for row in grid:
        for element in row:
            if element == 1:
                perimeter+= 2

    return perimeter

if __name__ == '__main__':
    island_perimeter()
