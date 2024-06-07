class Solution {
public:
    int binary(vector<int>& nums, int goal) {
        if (goal<0) return 0;
        int left = 0, right = 0, sum = 0, cnt = 0;
        while(right<nums.size()){
            sum += nums[right];
            while(sum>goal){
                sum = sum - nums[left];
                left++;
            }
            cnt = cnt + (right - left + 1);
            right++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return binary(nums,goal) - binary(nums, goal-1);
    }
};