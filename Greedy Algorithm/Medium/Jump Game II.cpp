class Solution {
public:
    int jump(vector<int>& nums) {
        int left = 0, right = 0, jumps = 0;
        int n = nums.size();
        while (right < n - 1) {
            int far = right;
            for (int ind = left; ind <= right; ind++) {
                far = max(ind + nums[ind], far);
            }
            left = right + 1;
            right = far;
            jumps++;
        }
        return jumps;
    }
};