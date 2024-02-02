vector<int> print(int x, vector<int> &v){
    if(x==1){
        v.push_back(1);
        return v;
    }
    v.push_back(x);
    print(x-1, v);
    return v;
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    print(x, ans);
    return ans;
}
