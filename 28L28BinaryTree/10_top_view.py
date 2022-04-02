""" 
     - find the details of the users 
     - debug your code first in the vscode 
"""
class Node:
    def __init__(self, data):
        self.data = data 
        self.left = None 
        self.right = None 


def topViewHelper(root, level, dist, d):

    if root is None:
        return 
    
    if dist not in d or level < d[dist][1]:
        d[dist] = (root.data, level)
    
    topViewHelper(root.left, level+1, dist-1, d)
    topViewHelper(root.right, level+1, dist+1, d)

def topView(root):
    d = {}
    topViewHelper(root, 0, 0, d)
    for key in sorted(d.keys()):
        print(d.get(key)[0], end=' ')


root = Node(11)
root.left = Node(9)
root.right = Node(13)
root.left.right = Node(15)


topView(root)
print(root.data)