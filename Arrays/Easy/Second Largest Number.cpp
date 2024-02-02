int secondlarge(vector<int> &a, int n) {
    int large = a[0];
    int secondlarge = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] > large) {
            secondlarge = large;
            large = a[i];
        } else if (a[i] < large && a[i] > secondlarge) {
            secondlarge = a[i];
        }
    }
    return secondlarge;
}

int secondsmallest(vector<int> &a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int secondlarge_value = secondlarge(a, n);
    int secondsmallest_value = secondsmallest(a, n);
    return {secondlarge_value, secondsmallest_value};
}