# Brute Force solution 
class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        searchedResult = []
        products.sort() # NSlogN
        for i in range(len(searchWord)): # S 
            serchCh = searchWord[:i+1]
            result = []
            for prd in products: # N 
                flag = True
                if len(prd)>=len(serchCh):
                    for k in range(len(serchCh)):
                        if serchCh[k] != prd[k]:
                            flag = False
                            break
                else:
                    flag = False
                if flag and len(result)<3:
                    result.append(prd)
            searchedResult.append(result)
        return searchedResult

class TreeNode:
    def __init__(self):
        self.children = [None]*26
        self.words = []
        
class Trie:
    def __init__(self):
        self.root = TreeNode()
    def _getIndex(self,ch):
        return ord(ch)-ord('a')
    def insert(self,word):
        cur_node = self.root
        for ch in word:
            index = self._getIndex(ch)
            if cur_node.children[index] is None:
                cur_node.children[index] =TreeNode()
            cur_node = cur_node.children[index]
            cur_node.words.append(word)
        return
    def search(self,word):
        cur_node = self.root
        for ch in word:
            index = self._getIndex(ch)
            if cur_node.children[index] is None:
                return False
            cur_node = cur_node.children[index]
        return cur_node.words
    
    
class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        root = Trie()
        for word in products:
            root.insert(word)
        res = []
        for i in range(len(searchWord)):
            tmp = root.search(searchWord[:i+1])
            if tmp:
                res.append(sorted(tmp)[:3])
            else:
                res.append([])
        return res

## Trie solutions: 
# So total is O(m * n) + O(m) ; which is eventually O(m * n)

# And space complexity is O ( 24 * 3 * m ) => O(m)
