 string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;
        for(const char c : s){
            if(c == '('){
                if(++cnt > 1)
                ans += c;
            }
            else if(--cnt>0){
                ans+=c;
            }
        }
    return ans;
    }