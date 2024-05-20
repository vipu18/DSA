bool isop(char x){
    return(x>='a' && x<='z') || (x>='A' && x<='Z');
}
class Solution {
  public:
    string postToInfix(string exp) {
        stack <string> st;
        for(int i = 0; exp[i]!='\0'; i++){
            if(isop(exp[i])){
                string op(1, exp[i]);
                st.push(op);
            }
            else{
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                st.push("(" + op2 + exp[i] + op1 + ")");
            }
        }
        return st.top();
    }
};