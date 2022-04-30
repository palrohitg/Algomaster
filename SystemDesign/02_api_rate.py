# Authenticatio or login api send otp api main
# Throlling of api requests is also a part of Rate limiter 


# Functional Requirements
# Limit the number of calls an entity (user, device or IP) can make to an API within a given time frame.
# In a distributed system, requests are accessible through multiple servers. The API rate limit should apply to the combination of all the servers in the cluster.


# Non Functional Requirements
# The API rate limiter should be highly available. This is because, in case of non-availability, the system will be prone to attacks.
# The system should have low latencies so the user experience does not suffer.

# Token bucket main oly : 
a. user_id, timestamp, quota redis saves 
b. Replicatio of the data at every odes and
c. sticky sessions sigle server assig to the nodes that
d. locks one db problems there is ms of latency of that response time. 
e. Parking lot a desing