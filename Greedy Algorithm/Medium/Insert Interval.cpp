class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intv, vector<int>& ni) {
        int n = intv.size();
        vector<vector<int>> ans;
        int i = 0;
        while (i < n && intv[i][1] < ni[0]) {
            ans.push_back(intv[i]);
            i++;
        }
        while (i < n && intv[i][0] <= ni[1]) {
            ni[0] = min(ni[0], intv[i][0]);
            ni[1] = max(ni[1], intv[i][1]);
            i++;
        }
        ans.push_back(ni);
        while (i < n) {
            ans.push_back(intv[i]);
            i++;
        }
        return ans;
    }
};