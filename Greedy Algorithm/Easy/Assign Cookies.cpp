class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& siz) {
        int nim = greed.size();
        int mem = siz.size();
        int left = 0, right = 0;
        sort(greed.begin(), greed.end());
        sort(siz.begin(), siz.end());
        while(left < mem && right < nim){
            if(greed[right] <= siz[left]){
                right++;
            }
            left++;
        }
        return right;
    }
};