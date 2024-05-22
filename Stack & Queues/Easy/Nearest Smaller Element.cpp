vector<int> Solution::prevSmaller(vector<int> &arr) {
     stack <int> st;
     int n = arr.size();
     vector <int> l(n);
     for(int i =0; i<n; i++){
         int x =-1;
         while (!st.empty() && st.top()>=arr[i]) st.pop();
         if(!st.empty()) x= st.top();
         l[i] = x;
         st.push(arr[i]);
     }
     return l;
}