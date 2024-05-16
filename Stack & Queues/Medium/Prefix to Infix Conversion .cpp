bool isoperator(char x){
    switch (x){
        case '+':
        case '-':
        case '/':
        case '*':
        case '^':
        case '%':
        return true;
    }
    return false;
}
class Solution {
  public:
    string preToInfix(string pre_exp) {
        stack<string> st;
        int length = pre_exp.size();
        for(int i = length - 1; i>=0; i--){
            if(isoperator (pre_exp[i])){
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string temp = "("+op1+pre_exp[i]+op2+")";
                st.push(temp);
            }
            else{
                st.push(string(1, pre_exp[i]));
            }
        }
        return st.top();
    }