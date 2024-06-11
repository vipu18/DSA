class Solution {
  public:
    string minWindow(string s, string t) {
        string window = "";
        int j = 0, min = s.length() + 1;  // Initialize min to s.length() + 1 to ensure it can be updated
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == t[j] && ++j == t.length()) {  // Increment j when characters match and check if t is fully matched
                int end = i + 1;  // End of the current window
                while (j > 0) {
                    if (s[i--] == t[--j]);  // Move backward to find the start of the window
                }
                i++;  // Adjust i to point to the start of the window
                if (end - i < min) {  // Check if the current window is the smallest found
                    min = end - i;
                    window = s.substr(i, min);  // Update the smallest window
                }
            }
        }
        return window;  // Return the smallest window found
    }
};
