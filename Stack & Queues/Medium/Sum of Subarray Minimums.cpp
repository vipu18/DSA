class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<pair<int, int>> st1, st2;
        
// Calculate left counts
for(int i = 0; i < n; ++i) {
    int cnt = 1;
    while(!st1.empty() && st1.top().first >= arr[i]) {
        cnt += st1.top().second;
        st1.pop();
    }
    st1.push({arr[i], cnt});
    left[i] = cnt;
}

// Calculate right counts
for(int i = n - 1; i >= 0; --i) {
    int cnt = 1;
    while(!st2.empty() && st2.top().first > arr[i]) {
        cnt += st2.top().second;
        st2.pop();
    }
    st2.push({arr[i], cnt});
    right[i] = cnt;            
}
        
        // Calculate result
        int result = 0;
        for(int i = 0; i < n; ++i) {
            result = (result + (long long)arr[i] * left[i] * right[i]) % 1000000007;
        }
        
        return result;
    }
};
