class Solution{
public:
    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices) {
        vector<int> result;
        for(int query : indices) {
            int count = 0;
            for(int i = query + 1; i < n; i++) {
                if(arr[i] > arr[query]) {
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};