int ans = 0;

void merge(vector<int> &a, int s, int mid, int e) {
    int i = s;
    int j = mid + 1;
    vector<int> B;

    while (i <= mid && j <= e) {
        if (a[i] <= a[j]) {
            B.push_back(a[i++]);
        } else {
            B.push_back(a[j++]);
            ans += mid - i + 1;
        }
    }

    while (i <= mid) {
        B.push_back(a[i++]);
    }

    while (j <= e) {
        B.push_back(a[j++]);
    }

    // Copying the sorted list to the original array
    for (int i = s; i <= e; i++) {
        a[i] = B[i - s];
    }
}

void mergeSort(vector<int> &a, int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        mergeSort(a, s, mid);
        mergeSort(a, mid + 1, e);
        merge(a, s, mid, e);
    }
}

int numberOfInversions(vector<int> &a, int n) {
    mergeSort(a, 0, n - 1);
    return ans;
}
