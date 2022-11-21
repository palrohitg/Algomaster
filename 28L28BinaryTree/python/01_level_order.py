# Zig Zag order Traversal 
class TreeNode:
    
    def __init__(self, data):
        self.data = data 
        self.left = None 
        self.right = None 
        

def zigZagOrderTraversal(root):
    if (root == None): return 
    
    queue = [] 
    queue.append(root) 
    results = [] 
    flag = False  
    
    while len(queue) > 0: 
        sz = len(queue)
        cur_list = [None]*sz 
        for i in range(sz):
            data = queue[0].data
            node = queue.pop(0)
            if (not flag): 
                cur_list[i] = data 
            if (flag):
                cur_list[sz - i - 1] = data
            if (node.left):
                queue.append(node.left) 
            if (node.right):
                queue.append(node.right) 
            
        results.append(cur_list)
        flag = not flag  # Toggle Value in python 
    
    return results


def leftViewBinaryTree(root):
    if root is None:
        return 
    
    queue = []
    queue.append(root) 
    ans = []
    
    while len(queue) > 0:
        sz = len(queue) 
        i = 0 
        while i < sz:
            i += 1 
            data = queue[0].data
            node = queue.pop(0)
            
            if (i == 1):
                ans.append(data) 
            if (node.left):
                queue.append(node.left) 
            if (node.right):
                queue.append(node.right)
    
    return ans 

root = TreeNode(10) 
root.left = TreeNode(12) 
root.left.left = TreeNode(14) 
root.right = TreeNode(15) 

print(leftViewBinaryTree(root))