void printNumber(int x, vector<int> & ans , int i){
    if(i == x){
        ans.push_back(i);
        return;
    }
    ans.push_back(i);
    printNumber(x , ans, i+1);
}
vector<int> printNos(int x) {
    vector<int> ans;
    printNumber(x, ans, 1);
    return ans;
}