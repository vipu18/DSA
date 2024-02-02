void rec(int a, int n, int nums[]) {
    if (a < n) {
        swap(nums[a], nums[n-1]);
        rec(a+1, n-1, nums);
    }
}

vector<int> reverseArray(int n, vector<int> &nums) {
    int numsArray[n];  // Convert vector to array for recursive function
    for (int i = 0; i < n; ++i) {
        numsArray[i] = nums[i];
    }

    rec(0, n, numsArray);

    vector<int> result(numsArray, numsArray + n);
    return result;
}
