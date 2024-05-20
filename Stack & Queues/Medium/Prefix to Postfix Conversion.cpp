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
    string preToPost(string pre_exp) {
        stack <string> st;
        int length = pre_exp.size();
        for(int i = length-1; i>=0; i--){
            if(isop(pre_exp[i])){
            string op1= st.top(); st.pop();
            string op2= st.top(); st.pop();
            string temp = op1 + op2 + pre_exp[i];
            st.push(temp);
        }
    else{
        st.push(string(1,pre_exp[i]));
        }
      }
      return st.top();
    }
};