/*
    Find the mincost in the running difference and  purchase all the petrol required to reach to destination from there 
    Question : Decide the datatypes according to the constraints like mutiplying two large numbers 
*/
#include<iostream>
#include<climits> 
#define ll long long 
using namespace std; 


int main() {

    ll cost[100005]; 
    ll litre[100005];
    ll t; cin >> t; 

    while(t--) {
        ll n; cin >> n; 
        ll money = 0;
        ll min_cost = INT_MAX;
        // No of checkout to reach to the destinations 
        for(ll i = 0; i < n; i++) {
            cin >> cost[i]; 
        }

        for(ll i = 0; i < n; i++) {
            cin >> litre[i]; 
        }


        // Find the min cost in the running streams 
        for(ll i = 0; i < n; i++) {
            min_cost = min(min_cost, cost[i]);
            money += litre[i] * min_cost; // per litre fuel expenses 
        }

        cout << money << endl;

    }

    return 0;
}

/*
1-3 years of relevant experience. Hands on in any object oriented or functional programming language i.e. Java, Golang, Clojure, Python, Ruby etc building applications from scratch
Good understanding of distributed systems fundamentals,event driven systems (kafka, rabbitmq), Linux fundamentals, container technologies, TCP/IP stack, internet routing and load balancing
Basic understanding of cluster orchestrators and schedulers such as Kubernetes
Ability to understand and implement Continuous Integration and Continuous Delivery
Basic understanding of microservices architecture, RESTful services, preferably worked on production distributed systems
*/