class Solution {
public:
    long long solve(vector<int>& bt) {
        int n = bt.size();
        sort(bt.begin(), bt.end());
        long long time = 0, waiTime = 0;
        for(int i = 0; i < n; i++){
            waiTime += time;
            time += bt[i];
        }
        return (waiTime / n);
    }
};