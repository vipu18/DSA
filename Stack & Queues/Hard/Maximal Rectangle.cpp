class Solution {
public:
    int maxhisto(vector<int>& heights) {
        stack<int> st;
        int maxa = 0;
        int n = heights.size();
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty()) width = i;
                else width = i - st.top() - 1;
                maxa = max(maxa, width * height);
            }
            if (i < n) st.push(i);
        }
        return maxa;
    }

    int maximalRectangle(vector<vector<char>>& a) {
        if (a.empty() || a[0].empty()) return 0;
        int rows = a.size(), cols = a[0].size();
        vector<int> currow(cols, 0);
        int maxans = 0;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (a[i][j] == '1') {
                    currow[j] += 1;
                } else {
                    currow[j] = 0;
                }
            }
            int curans = maxhisto(currow);
            maxans = max(maxans, curans);
        }
        return maxans;
    }
};