class LRUCache {
    unordered_map<int, pair<list<int>:: iterator, int>> hm; 
    list<int> dll; 
    int cap; 
    
public:
    LRUCache(int capacity) {
      cap = capacity;   
    }
    
    void moveToFirst(int key) {
        dll.erase(hm[key].first); // delete the node from the double linked list  
        dll.push_front(key);  // insert at double linked list 
        hm[key].first = dll.begin(); 
        return; 
    }
    
    int get(int key) {
        if (hm.find(key) == hm.end()) return -1; 
        moveToFirst(key); 
        return hm[key].second; 
        
    }
    
    void put(int key, int value) {
        if (hm.find(key) != hm.end()) {
            hm[key].second = value; // value ko change kardiya hai and also 
            moveToFirst(key); 
            
        } else {
            dll.push_front(key); 
            hm[key] = {dll.begin(), value}; 
            cap--; 
        }
        if (cap < 0) {
            hm.erase(dll.back()); 
            dll.pop_back(); 
            cap++; 
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */