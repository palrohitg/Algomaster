## Leetcode Questions

```go
func isAcronym(words []string, s string) bool {
    ac := "" 
    for _, word := range words{
        if (word != "") && (word != " "){
            ac = ac + string(word[0]) // concate with the string values here 
        }
    }
    return ac == s
}
```

```cpp 
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ac = ""; 
        for (auto word : words) {
            if (word != "" && word != " ") {
                ac += word[0]; 
            } 
        }
        return ac == s; 
    }
};
``` 

```go
func minSumElements(k int , n int) int {
    set := make(map[int]bool) 
    ans := 0
    i := 1 

    if len(set) < n {
        if _, found := set[k-i]; !found {
            set[i] = true
            ans += i 
        }
        i++
    }
    return ans 
}
```
