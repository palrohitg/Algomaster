Generic Programming :
1. Means the function / algorithm is going to work with all kinds of datatype int, float, stirng , char arrays etc;
2. template<typename t>  syntax: of the templates



# Major part of stl different types of containers

1. sequence containers
- vectors
- list
- deque
- arrays
- forward_list

2. containers assocative
set
multiset
map
multimaps

3. containers adapators
- queue
- priority queue
- stacks
4. unordered assocative containers
- unordered_map
- unordered_multiset
- set
- multimap


# Iterators : entity which allows to access the data from any type of containers

# Type of Iterators :
1. Input Iterators
2. Output Iterators
3. Forward Iterators
4. Bidirectional Iterators
5. Random Access Iterators eg: vectors, arrays but not in linked list because it LL doesn't allows the random access



# Why learn iterators ? 

1. Iterators can be works on the different data types/ Containers like vectors, list or other sequences containers
2. No need to build the forward iterators class the people stl already done that for us so we have to only read it
3. REST works.