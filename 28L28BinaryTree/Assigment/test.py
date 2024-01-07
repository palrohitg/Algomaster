class Game:
    
    def __init__(self):
        self.Board = None 
        self.Dice = None 
        
    
    def initialize(self):
        self.Board = 5 
        self.Dice = 6 
        
        
game = Game() 
game.initialize()
print(game)
print(game.Board)