// Two pointer solutions O(N) and O(1)
bool backspaceCompare(string S, string T)
{
    int i = S.length() - 1, j = T.length() - 1, back;
    while (true)
    {
        back = 0;
        while (i >= 0 && (back > 0 || S[i] == '#'))
        {
            back += S[i] == '#' ? 1 : -1;
            i--;
        }
        back = 0;
        while (j >= 0 && (back > 0 || T[j] == '#'))
        {
            back += T[j] == '#' ? 1 : -1;
            j--;
        }
        if (i >= 0 && j >= 0 && S[i] == T[j])
        {
            i--;
            j--;
        }
        else
        {
            break;
        }
    }
    return i == -1 && j == -1;
}

// Implemented with stack operations
class Solution {
public:
    
    stack<char> string_to_stack(string s) {
        stack<char> s1; 
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '#' and s1.empty()) {
                continue; 
            }
            if (ch == '#' and !s1.empty()) {
                s1.pop(); 
            } else {
                s1.push(ch); 
            }
        } 
        
        return s1; 
    }
    
    void print_stack(stack<char> s) {
        // cout << s.top(); 
        while(!s.empty()) {
            cout << s.top(); 
            s.pop(); 
        }
        cout << endl; 
    }
    
    bool compare_stack(stack<char> s1, stack<char> s2) {
    
        while(!s1.empty() && !s2.empty()) {
            char first_char = s1.top();
            s1.pop();
            char second_char = s2.top();
            s2.pop();
            if (first_char != second_char) {
                return false; 
            }
        }
        
        if (s1.empty() && s2.empty()) return true; 
        
        return false; 
    }
    
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2; 
        s1 = string_to_stack(s);
        s2 = string_to_stack(t); 
        
        return compare_stack(s1, s2); 
    }
};