# # 1. Tic TOE TAC Game
# # https://aaronice.gitbook.io/lintcode/data_structure/design-tic-tac-toe
# # 2. Snake and Ladder Game 
# # https://medium.com/@abhigulve06/lld-of-the-snake-and-ladder-game-3fd9f47cdd3a
# # 3. Parking a lot Systems: 
# # https://github.com/Abhigulve/parking-system/
# # https://leetcode.com/discuss/interview-question/124739/Parking-Lot-Design-Using-OO-Design
# # https://github.com/TheTechGranth/thegranths/tree/master/src/main/java/SystemDesign/TicTacToe

# class TicTaeToe:

#     #private members
#     __board = None 
#     __X = "X" 
#     __O = "O" 
#     __size = None 
        
#     def __init__(self, size):
#         self.__board = [[None for _ in range(3)] for _ in range(3)]
#         self.size    = size 

#     def move(self, row, col, player):
        
#         C = self.__O if player == 2 else self.__X
    
#         if self.__board[row][col]: 
#             return 0
        
#         self.__board[row][col] = C

#         if(self.hasWon(row, col, self.size, C)):
#             return player

#         return 0 
        
#     def hasWon(self, row, col, size, ch):
#         rowLine = True 
        
#         for i in range(size):
#             rowLine = rowLine and (self.__board[row][i] == ch)

#         colLine = True       
#         for i in range(size):
#             colLine = colLine and (self.__board[i][col] == ch)

#         if (row + col == size - 1 or row == col):
#             diagLine1 = True 
#             diagLine2 = True 
            
#             for i in range(size):
#                 diagLine1 = diagLine1 and (self.__board[i][i] == ch)
            
#             for i in range(size):
#                 diabgLine2 = diagLine2 and (self.__board[size-1-i][i] == ch)

#             return rowLine or diagLine1 or diagLine2 or colLine
#         else:
#             return rowLine or colLine

#     def printBoard(self):
#         print(self.__board)

# if __name__ == '__main__':
#     obj = TicTaeToe(3)
#     win = obj.move(0, 0, 1)
#     win = obj.move(1, 1, 1)
#     win = obj.move(2, 2, 1)
#     print(win)
#     obj.printBoard()

class GameBoard:
    
    def __init__(self, board, players):
        self.board = board
        self.players = players 

    def get_players(self):
        self.players.get_player_details()
    

class Players: 

    def __init__(self):
        self.__name = None  
        self.__address = None 
    
    def get_player_details(self):
        print(self.__name) 
        print(self.__address)
    
    def set_name(self, name):
        self.__name = name 
    
    def set_address(self, address):
        self.__address = address 

# p1 = Players() 
# p1.set_name("vikas")
# p1.set_address("rohitpal")
# game = GameBoard(3, p1) 
# game.get_players()
# l = []
# l.append(19)
# l.append(12)

# print(l.pop())
# print(l.append(19))
# print(l)
value = int(input("Enter new values here"))
print(value)