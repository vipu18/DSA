class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = count(nums.begin(), nums.end(), 1); 
        if (cnt1 == 0) return 0; 
        int ws = cnt1; 
        int cnt0 = 0; 
        for (int i = 0; i < ws; i++) {
            if (nums[i] == 0) {
                cnt0++;
            }
        }
        int mn = cnt0; 
        for (int i = ws; i < n + ws; i++) {
            if (nums[i % n] == 0) cnt0++; 
            if (nums[(i - ws) % n] == 0) cnt0--; 
            mn = min(mn, cnt0); 
        }
        return mn; 
    }
};
