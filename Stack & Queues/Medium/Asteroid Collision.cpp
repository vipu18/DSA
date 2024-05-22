class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        for(int a: asteroids){
            while(!st.empty() && a<0 && st.top()>0){
                int diff = a + st.top();
                if(diff>0){
                    a=0;
                }else if(diff<0){
                    st.pop();
                }else{
                    a = 0;
                    st.pop();
                }
            }
            if(a) st.push(a);
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};