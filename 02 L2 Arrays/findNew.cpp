#include <iostream>
#include <vector>

using namespace std;

vector<int> manacher(string s) {
    string processed = "^#";
    for (char c : s) {
        processed += c;
        processed += '#';
    }
    processed += "$";

    int n = processed.size();
    vector<int> p(n, 0);
    int center = 0, right = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (i < right) {
            p[i] = min(right - i, p[2 * center - i]);
        }
        while (processed[i + p[i] + 1] == processed[i - p[i] - 1]) {
            p[i]++;
        }
        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
    }

    vector<int> result;
    for (int i = 2; i < n - 1; i += 2) {
        result.push_back(p[i]);
    }
    return result;
}

int main() {
    string input = "ababa";
    vector<int> lengths = manacher(input);
    for (int len : lengths) {
        cout << len << " ";
    }
    cout << endl;
    return 0;
}
