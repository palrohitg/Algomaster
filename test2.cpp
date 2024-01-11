#include<bits/stdc++.h>
using namespace std;

/*


Input : s = "GeeksforGeeks"
Input : s = "eeksforGeeksGe"
        stemp = s 
        stemp = s[:len]

        d = 2
        stemp = eksforGeeksGe        


    Queue: 
        e 
        G  

    1. O(N) + O(N) = O(N), SC = O(1)

Output : Left Rotation  : "eksforGeeksGe" 





         Right Rotation : "ksGeeksforGee" 


*/


def leftRotation(s, d): 
    // Base Case 
    // Case 1 : if d is >= size 
   
    // ans = "" 
    // // Case 1: 
    // ans = s[d:len(s)] 
    // for i:=0; i < d; i++:
    //     ans.append(s[i]) 

    // Case 2: d > size 
    stemp = s 
    while(d--) {
        firstelemnt = stemp[0:1]
        stemp = stemp[1:len(stem)]
        stemp.push(firstelemnt)
    }


    TC : O(N)
    SC = O(N)


/*
    DB Design IMD: 

    Requirements: 
    1. Movie 
    2. User 


    User: 
    1. Id 
    2. Name 
   
    

    UserMovieRoleType:
    
  

    

    Movie: 
        1. Id 
        2. Name 
        3. ReleaseDate 
        4. ThumpNail 

    Example: 
        1. 2342
        2. 3Idi
        3. 2009 
        5. Image URl 

    Input : "3Idiot" 
    Output : Name of Actors 

    MovieUserMapping 
    1. Id 
    2. MovieID (Index)
    3. UserId 
    4. RoleType 


    1. 243234
    2. 2342 
    3. 111
    4. LeadActor 

    ReviewRating: 
    1. Id 
    2. MovieId 
    3. UserId 
    4. Rating : Integer
    5. Description: 


    In or --> Indexing 
    Not Indexing --> Join  

    
    select Name from User where userId in (
        select userId from MovieUserMapping where movieId in (
            select Id from Movie where Name = "3Idiot";
    ));



*/  


int main() {
    // Input: intervals = [[, [1,2],[2,3],[3,4],[1,], [1, 5] ] 
 
    return 0; 
}