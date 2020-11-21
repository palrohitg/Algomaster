Real-life example of hashtable : 
1. 





Hashing convert the phone to one integer to access the elements which is not possible in arrays 
Hash function is used to do the above conversions 

Collision : when two keys get the same address in the hashtable buckets so, we have two values at particulars indexes 

- Collision handling methods : 
    1. Open hashing - separate chaining 
    2. Closed hashing - open addressing 
        a. linear probing 
        b. quadratic probing 
    3. double hashing 


- Separate chaining 
1. implement using linked list 
2. key k is stored in list of t[h[k]]
3. table size is 1- 
    * h(k) = k mod 19
    * insert first 10 perfect square 
    * 

- Reduce collison methods are: 

    a. rehashing : if load factors increase at the certain level then the hashing is going to  happens agains then the arrays size is increase and c
                    content of the hashtable is replace again to lower upon the complexity of the programs 
    b. load factors : 


    Note : To aviod collision we can do assign the large memorys which is known to us in advances to aviod collision time/space complexity trade 
    
    
# Mapping of key and value pair is also done using the hashfunctions : 

Collision is resolved using the linear probing techniques:
Assumption : 
1. There are no more than 20 elements in the data set.
2. Hash function will return an integer from 0 to 19.
3. Data set must have unique elements.
