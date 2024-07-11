class Solution {
public:
    vector<int> maxCombinations(int n, int K, vector<int> &a, vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> ans;
        priority_queue<pair<int, pair<int, int>>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({a[i] + b[n-1], {i, n-1}});
        }
        while (K-- && !pq.empty()) {
            auto top = pq.top();
            pq.pop();
            int sum = top.first;
            int i = top.second.first;
            int j = top.second.second;

            ans.push_back(sum);
            if (j > 0) {
                pq.push({a[i] + b[j-1], {i, j-1}});
            }
        }
        return ans;
    }
};