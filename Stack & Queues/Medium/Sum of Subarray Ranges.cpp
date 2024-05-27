class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            int mini = nums [i];
            int maxi = nums [i];
         for(int j = i; j<size; j++){
            mini = min(mini , nums[j]);
            maxi = max(maxi , nums[j]);
            sum += maxi - mini;
         }
        }
        return sum;
    }
};