// learn how to implement over own headerfile and import in our code 
// given key hashfunc return the values and the assign that element in the list of that functions (

template<typename T>
class Hashtable{

    Node<T>** table;
    int current_size; 
    int table_size;



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
            

        }

        // Search the element using the given keys 
        T search(string key) {

        }

        // Erase/Delete the elements using the hash maps 
        void erase(string key) {

        }

};