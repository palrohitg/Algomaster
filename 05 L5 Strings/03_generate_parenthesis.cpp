void solve(string digit, string output, int index, vector<string> &ans, string mapping[]) {
    if (index >= digit.length()) {
        ans.push_back(output);
        return; 
    }  

    int num = digit[index] - '0';
    string value = mapping[num];
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]); 
        solve(digit, output, index+1, ans, mapping);
        output.pop_back(); 
    }

    return; 
    cout << ans << endl; 
    
}