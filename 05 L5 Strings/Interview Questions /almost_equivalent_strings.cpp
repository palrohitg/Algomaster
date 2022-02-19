#include<iostream>
using namespace std; 
#include<unordered_map>

int main() {

    unordered_map<char, int> word1_frequency; 
    unordered_map<char, int> word2_frequency;

    string word1 = "aaaa"; 
    string word2 = "bccb"; 

    for (auto c : word1) {
        // check if the c is present in hashmap or not 
        if (word1_frequency.find(c) != word1_frequency.end()) {
            
        }   
    }

    return 0;
}