#include<bits/stdc++.h>
int countstudents(vector<int>&arr, int pages){
    int students = 1;
    long long pagestudent = 0;
    for(int i =0; i<arr.size(); i++){
        if(pagestudent+arr[i]<=pages){
            pagestudent += arr[i];
        }
        else{
            students += 1;
            pagestudent = arr[i];
        }
    }
    return students;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low<=high){
        int mid = (low+high)/2;
        int students = countstudents (arr,mid);
        if(students>m){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return low;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
     return findPages(boards, boards.size(), k);
}