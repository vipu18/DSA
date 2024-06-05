class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, maxlen = 0, maxCount = 0;
        vector<int> hash(26, 0);
        while (right < s.size()) {
            hash[s[right] - 'A']++;
            maxCount = max(maxCount, hash[s[right] - 'A']);
            if (right - left + 1 - maxCount > k) {
                hash[s[left] - 'A']--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
};
