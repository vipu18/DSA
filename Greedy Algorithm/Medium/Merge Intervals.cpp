class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mi;
        int n = intervals.size();
        if(n == 0){ return mi;}
        sort(intervals.begin(), intervals.end());
        vector<int>ti = intervals[0];
        for(auto it : intervals){
            if(it[0] <= ti[1]){
                ti[1] = max(it[1], ti[1]);
            }
            else{
                mi.push_back(ti);
                ti = it;
            }
        }
        mi.push_back(ti);
        return mi;
    }
};