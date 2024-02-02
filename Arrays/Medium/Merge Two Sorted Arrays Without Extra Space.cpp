#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
    a.insert(a.end(),b.begin(),b.end());
    sort(a.begin(),a.end());
    b.clear();
}