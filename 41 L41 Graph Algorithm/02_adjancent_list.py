"""
 Adjacent list implemenation of Graph


# assingment of empty list here
for i range(n):
    self.adjList[i] = []

for (src, dest, weight) in edges:
            # allocate node in adjacency list from src to dest
            self.adjList[src].append((dest, weight)) 
"""
class Graph:
    #Constructors
    def __init__(self, n, edges):
        self.adjList = [[] for _ in range(n)]
        print(self.adjList)
        # add edges to the director graph
        for (src, dest) in edges:
            self.adjList[src].append(dest)

    def printGraph(self):
        # Graph print 
        print(self.adjList)
        for src in range(len(self.adjList)):
            print(src, "==", end='')
            # print current vetex and all its neighbouring vertices 
            for dest in self.adjList[src]:
               print(f"{dest}-->", end='')
            print()

if __name__ == "__main__":  
    n = 3
    matrix_list = [[]for _ in range (n)]
    print(matrix_list)
    # edges = [(0,1), (0,1), (0,1), (0,1), (0,1)]
    # n = 6 
    # graph = Graph(n, edges)
    # graph.printGraph()
    pass