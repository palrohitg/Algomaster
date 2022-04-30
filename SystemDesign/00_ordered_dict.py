from collections import OrderedDict
from re import S

od = OrderedDict()

od['a'] = 1
od['b'] = 1
od['c'] = 1
od['d'] = 1

print(od.popitem(last=False)) # stack perform 
print(od)
print(od)

### LRC Cache 
class LRUCache:

    def __init__(self, capacity:int):
        self._capacity = capacity
        self._map = OrderedDict()
    
    def get(self, key: int)-> int:
        if key in self._map:
            value = self._map.pop(key) # pop and return the values
            self._map[key] = value
            return value 
        
    def put(self, key:int, value:int)-> None:
        if key in self._map:
            self._map.pop(key)
        elif len(self.map) == self._capacity:
            self._map.popitem(last=False)
        self._map[key] = value

    
        
            