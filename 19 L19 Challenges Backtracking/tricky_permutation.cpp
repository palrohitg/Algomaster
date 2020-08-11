/*

Subsequence Problem Required the concept permuation and combinationsn swaps of undo karna pedega 

Given a string containing duplicates, print all its distinct permutations such that there are no duplicate permutations and all permutations are printed in a lexicographic order.

Input Format
The first and only line of the test case contains the input string.

Constraints
Length of the string <= 8

Output Format
Print all the distinct permutations in a lexicographic order such that each permutation is in a new line. Note that there should not be any duplicate permutations.

Sample Input
ABA
Sample Output
AAB
ABA
BAA
Explanation
The possible permutations for the given string are { "AAB" , "AAB" , "ABA" , "BAA" } . We skip the repeating "AAB" permutation and only print it in once. Also we print the final output in lexicographical order.

String Permutations right 

1. Get the current index of the string and replace all the current untill found the null and call rexursion do we the next steps  
2. Do this for all the string 
3. Variation sorted and repetited arrays ko kaise handle karna hai
*/

/*

    Optimization of the algorithms
    1. Remove the output char arrays 
    2. Remove the set 

*/



// Without Backtracking 
#include<iostream>
#include<set>
using namespace std;
set<string> s;


void permute(char *input, char *output, int i, int j) {

    // Base Case 
    if(input[i] == '\0') {
        output[j] = '\0';
        s.insert(output);
        return;
    }


    // Recursive case 
    // 1. Replace the current character and then call on the recursive part
    for(int k=i; input[k] != '\0'; k++) {
        swap(input[i], input[k]);
        output[j] = input[i];
        permute(input, output, i+1, j+1);
        // undo or brack jo change kiya tha restore the original arrays 
        swap(input[i], input[k]);
    }

}

int main() {

    char input[10];
    char output[10];
    cin >> input;
    permute(input, output, 0, 0);

    // Print the set 
    for(set<string>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *(it) << endl;
    }

    return 0;

}
