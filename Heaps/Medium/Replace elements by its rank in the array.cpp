class Solution {
public:
    vector<int> replaceWithRank(vector<int> &arr, int n) {
        vector<int> newarray = arr;
        sort(newarray.begin(), newarray.end());
        map<int, int> ranks;
        int rank = 1;
        for (int i = 0; i < n; i++) {
            int element = newarray[i];
            if (ranks[element] == 0) {
                ranks[element] = rank;
                rank++;
            }
        }
        for (int i = 0; i < n; i++) {
            int element = arr[i];
            arr[i] = ranks[element];
        }
        return arr;
    }
}
