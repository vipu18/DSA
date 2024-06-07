class Solution {
public:
    int binary(vector<int>& nums, int k){
        int left = 0, right = 0, sum = 0, cnt = 0;
        while(right<nums.size()){
            sum += nums[right] % 2;
            while(sum>k){
                sum = sum - nums[left] % 2;
                left++;
            }
            cnt = cnt + (right - left + 1);
            right++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return binary(nums,k) - binary(nums, k-1);
    }
};