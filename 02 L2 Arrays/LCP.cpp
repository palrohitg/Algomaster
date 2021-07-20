// find the LCP in two strings
string LCP(string X, string Y)
{
    int i = 0, j = 0;
    while (i < X.length() && j < Y.length())
    {
        if (X[i] != Y[j]) {
            break;
        }

        i++, j++;
    }

    return X.substr(0, i);
}

// Function to find the longest common prefix (LCP) between a given set of strings
string findLCP(vector<string> const &words)
{
    string prefix = words[0];
    for (string s : words) {
        prefix = LCP(prefix, s);
    }

    return prefix;
}