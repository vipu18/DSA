bool isop(char x){
    switch (x){
        case '+':
        case '-':
        case '/':
        case '*':
        return true;
    }
    return false;
}
class Solution {
  public:
    string postToPre(string post_exp) {
        stack <string> st;
        int length = post_exp.size();
        for(int i=0; i<length; i++){
            if(isop(post_exp[i])){
                string op1 = st.top(); 
                st.pop();
                string op2 = st.top(); 
                st.pop();
                string temp = post_exp[i] + op2 + op1;
                st.push(temp);
            }
            else{
                st.push(string(1, post_exp[i]));
            }
        }
        string ans="";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};Postfix to Prefix Conversion