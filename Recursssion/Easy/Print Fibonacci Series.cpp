vector<int> generateFibonacciNumbers(int n) {
    vector<int> ans;
    int a= 0, b= 1;
    ans.push_back(a);
    for(int i= 1; i<n; i++){
        int temp= a+b;
        a= b;
        b= temp;
        ans.push_back(a);
    }
    return ans;
}
