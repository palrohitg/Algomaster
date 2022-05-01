// learn how to implement over own headerfile and import in our code 
// given key hashfunc return the values and the assign that element in the list of that functions (
#include<cstring> 

template<typename T>
class Node {
    public:
        string key;
        T value; 
        Node<T>*next;

        Node(string key, T val) {
            this->key = key;
            value = val; 
            next = NULL; 
        }

        // Destructor to delete the memory locations
        ~Node() {
            if (next != NULL) {
                delete next; 
            }
        }
}; 

template<typename T>
class Hashtable{

    Node<T>** table;
    int current_size; 
    int table_size;

    int hashFn(string key) {
        int idx = 0; 
        int p = 1; 
        for (int j = 0; j < key.length(); j++) {
            idx = idx + (key[j]*p) % table_size;
            idx = idx%table_size;
            p   = (p * 27)% table_size;
        }
        return idx; 
    }

    public :

        Hashtable(int ts=8) {
            table_size = ts;
            table = new Node<T>*[table]; // arrays of pointers 
            current_size = 0;

            // assign null to all the elements 
            for(int i=0; i<n; i++) {
                table[i] = NULL;
            }

        }

        // insert the key value pairs 
        void insert(string key, T val) {
            int idx = hashFn(key);
            Node<T> *n = new Node<T>(key, val);
            // Inserting at head of the linked list 
            n->next = table[idx];
            table[idx] = n; 
            current_size++; 
        }

        // Search the element using the given keys 
        // T search(string key) {

        // }

        // // Erase/Delete the elements using the hash maps 
        // void erase(string key) {

        // }

        void print() {
            for (int i = 0; i < table_size; i++) {
                cout << "Bucket" << i << "-->"; 
                Node<T> *temp = table[i]; 
                while(temp != NULL) {
                    cout << temp->key << "->"; 
                    temp = temp->next; 
                }
                cout << endl; 
            }
        }
};