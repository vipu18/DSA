#include<bits/stdc++.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        for(auto it: nums){
            counts[it]++;
        }
        for(auto & it: counts){
            minheap.push({it.second, it.first});
            if(minheap.size() > k){
                minheap.pop();
            }
        }
        vector<int> res;
        while(k--){
            res.push_back(minheap.top().second);
            minheap.pop();
        }
        return res;
    }
};