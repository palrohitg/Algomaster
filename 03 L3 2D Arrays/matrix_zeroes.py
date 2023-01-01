def markEntireRowColumnZeroes(matrix: list[list[int]], row: int, column: int)->None:
    # mark all the row and columns as zeroes 
    # Iterate over colum 
    for i in range(len(matrix[0])):
        matrix[row][i] = 0 
    
    for i in range(len(matrix)):
        matrix[i][column] = 0    
    

def setZeroes(matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        tempMatrix = matrix 
        row = len(matrix) 
        column = len(matrix[0])
        
        for i in range(row):
            for j in range(column):
                if tempMatrix[i][j] == 0:
                    print(i, j)
                    markEntireRowColumnZeroes(matrix, i , j)
        print(tempMatrix)
        print(matrix)
        
    

matrix = [
          [1, 1, 1],
          [1, 0, 1],
          [1, 1, 1],
          ]

setZeroes(matrix)

a = 10 
b = a 
b = 20 

print(a, b)