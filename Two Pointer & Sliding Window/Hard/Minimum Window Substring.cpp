class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> hash;
        for (char c : t) {
            hash[c]++;
        }
        int left = 0, right = 0, min_len = INT_MAX, sindex = -1, cnt = 0;
        int required = t.size();
        while (right < s.size()) {
            if (hash[s[right]] > 0) cnt++;
            hash[s[right]]--;
            right++;
            while (cnt == required) {
                if (right - left < min_len) {
                    min_len = right - left;
                    sindex = left;
                }
                hash[s[left]]++;
                if (hash[s[left]] > 0) cnt--;
                left++;
            }
        }  
        return sindex == -1 ? "" : s.substr(sindex, min_len);
    }
};