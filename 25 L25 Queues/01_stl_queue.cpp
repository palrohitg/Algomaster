/*
Both push() (which internally calls push_back() on the underlying container)
and pop()(which internally calls pop_front() on the underlying container) 
provided by std::queue in
C++ STL have a constant O(1) time complexity since they only insert at the end
of queue or pop from the front of it. You can check http://www.cplusplus.com/reference/queue/queue/ to find out more about other methods and their time complexities.
*/