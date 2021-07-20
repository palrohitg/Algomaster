class Solution {
public:

    static bool comparator(pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.second > p2.second || (p1.second == p2.second && p1.first < p2.first))
            return true;
        return false;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m1;

        for (int i = 0; i < words.size(); i++)
            m1[words[i]]++;

        vector<pair<string, int>> v1;
        for (auto it = m1.begin(); it != m1.end(); it++)
            v1.push_back({it->first, it->second});

        sort(v1.begin(), v1.end(), comparator);

        vector<string> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(v1[i].first);
        }

        return ans;
    }
};


// NlogN Solutions, you can improve this solutions by providing the new solutions
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (auto w : words) {
            freq[w]++;
        }

        auto comp = [&](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        };

        typedef priority_queue< pair<string, int>, vector<pair<string, int>>, decltype(comp) > my_priority_queue_t;

        my_priority_queue_t  pq(comp);

        for (auto w : freq ) {
            pq.emplace(w.first, w.second);
            if (pq.size() > k) pq.pop();
        }

        vector<string> output;
        while (!pq.empty()) {
            output.insert(output.begin(), pq.top().first);
            pq.pop();
        }
        return output;
    }
};