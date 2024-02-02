vector<int> spiralMatrix(vector<vector<int>>&mat) {
int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;

    while (top <= bottom && left <= right) {
        // Traverse top row from left to right
        for (int i = left; i <= right; ++i) {
            ans.push_back(mat[top][i]);
        }
        top++;

        // Traverse right column from top to bottom
        for (int i = top; i <= bottom; ++i) {
            ans.push_back(mat[i][right]);
        }
        right--;

        // Check if there is a valid row between top and bottom
        if (top <= bottom) {
            // Traverse bottom row from right to left
            for (int i = right; i >= left; --i) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Check if there is a valid column between left and right
        if (left <= right) {
            // Traverse left column from bottom to top
            for (int i = bottom; i >= top; --i) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}