## Level Order Traversal In Python 
```python 
class Node:
    
    def __init__(self, key):
        self.key = key 
        self.left = None 
        self.right = None 


def printLevelOrder(root):
    h = height(root)
    for i in range(1, h+1):
        printCurrentLevel(root, i)

def printCurrentLevel(root, level):
    if root is None:
        return
    if level == 1:
        print(root.data, end=" ")
    elif level > 1:
        printCurrentLevel(root.left, level-1)
        printCurrentLevel(root.right, level-1)


def levelOrderTraversal(root):
    if root is None:
        return 
    
    queue = [] 
    queue.append(root) 

    while len(queue) > 0: 
        print(queue[0].data, end = " ")
        node = queue.pop() 
        
        if node.left is not None:
            queue.append(node.left) 
        
        if node.right is not None:
            queue.append(node.right) 
    
# Recursive find the height of tree 
def height(node):
    if node is None:
        return 0 
    else:
        lheight = height(node.left)
        rheight  = height(node.right) 
        if (lheight > rheight):
            return lheight + 1 
        return rheight + 1 


root = Node(10) 
root.left = Node(12) 
root.left.left = Node(13) 
print(height(root))

"""
Print new line each level
1. If current node is NULL 
2. Print the new line character 
3. Print if again the Queue is empty 
4. Push again the NULL Here to Maintain the NULL 
5. Else current->data 
"""
```` 

## Zig-Zag Order Traversal 
```python 
print("Working in this")
``` 