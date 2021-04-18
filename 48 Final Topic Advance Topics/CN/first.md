https://leetcode.com/discuss/interview-question/1098600/Frequently-Asked-MCQs-on-DSCNDBMSOSSystem-Design
https://leetcode.com/discuss/interview-question/762059/most-important-subjective-topics-for-technical-interview
-----------------------------------------------------------------------------------------------------------
Important Topics : 
1. Networks Topology 
2. Switch Hub Router Bridge
3. Transmission Modes. 
4. IPV4 vs IPV6 
5. Subnetting in IP 
6. OSI Layer
7. TCP VS UDP 
8. DNS DHCP FTP HTTP SMTP SNMP 
9. Flow or Error Controls . 
10. How Internets Works. 
11. Routing Algo 
12. HTTP VS HTTPS 
13. Subnetting / Supernetting 
------------------------------------------------------------------------------------------------------------
Network Devices 
1. Switch | HUB | Router | Bridge 
* All this are Network Connecting Devices. 
* HUB : A Hub is a layer-1 device and operates only in the physical network of the OSI Model. Since it works in the physical layer, it mainly deals with the data in the form of bits or electrical signals. A Hub is mainly used to create a network and connect devices on the same network only. 
Two Types : 
a. Active : Required a Power Supply and Can works as a repeater to amplify the signals. 
b. Passive : Doesn't required a power supply. Only provide connection / communications and doesn't amplify the signals. 
----------------------------------------------------------------------------------------------------------------
* BRIDGE : 
* A bridge is a layer-2 network connecting device, i.e., it works on the physical and data-link layer of the OSI model.
* It intreprets data in the form of data-frame. In phsyical layers it acts a repeater to regenerate the signals. 
* Bridge has Filerting Capacity means it can discard the faulty data frames adn will allow only the errorless data frames. 
* Maintain the tables to send the data-frame to correct destination MAC address. 
a. Transparent Bridge
b. Routing Bridge 
------------------------------------------------------------------------------------------------------------------- 
* SWITCH : 
* A switch is a layer-2 network connecting device, i.e., it works on the physical and data-link layer of the OSI model
* Switch acts a multiport bridge in the networks. It provides the bridging functionality with greater efficiency. 
( When a data frame arrives at the Switch, it first checks for any kind of error in the data frame. If the frame is error-free, it will search the MAC address of the destination in the Switch table. If the address is available in the switch table, it will forward the data frame to that specific node, else switch will register the MAC address in the switch table. If the destination address is not specified, it will broadcast the data frame to each node in the network.)



Bridge Vs Switch : 
1. Switch can have various ports But bridge can have 2/4/8 ports 
2. Bridge divides the networks into many segments. 
3. Error checking Operations are performed by Switch not by bridge. 
-------------------------------------------------------------------------------------------------------------------
* Routers: 
* A Router is a layer-3 network connecting device, i.e., it works on the physical, data-link and network layer of the OSI model. 
* It interprets data in the form of data packets. It is mainly an internetworking device, which can connect devices of different networks(implementing the same architecture and protocols)
* It routes or forwards the data packets from one network to another based on their IP addresses
* A router maintains a routing table using the routing algorithms. When a data packet is received at the router, it first checks the IP address. If the IP address is the same as the network's IP address, it receives the data packet, else it forwards the data packet to the destination IP address using the routing table.
Static Routing: In Static Routing, the path for the data packets is manually set. It is generally used for small networks.
Dynamic Routing: In Dynamic Routing, various routing algorithms are used to find the best and shortest path for the data packets.

-------------------------------------------------------------------------------------------------------------------- 
2. Tranmission Modes: 
a. Simplex Mode : One Directions Example Radio Station. 
b. Half-Duplex Mode : Transmission in either direction, but not sync. A Walkie-talkie is an example of the Half-duplex mode.
c. Full-Duplex Mode : Transmission in Both the Directions Simulanteneously. Example : telephone
---------------------------------------------------------------------------------------------------------------------- 
3. IPV4 Vs IPV6 
* https://www.geeksforgeeks.org/differences-between-ipv4-and-ipv6/
https://www.guru99.com/difference-ipv4-vs-ipv6.html#:~:text=IPv4%20is%2032%2DBit%20IP,is%20an%20alphanumeric%20addressing%20method.&text=IPv4%20uses%20ARP%20(Address%20Resolution,to%20map%20to%20MAC%20address.