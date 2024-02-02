int findmax(vector<int>& v) {
    int maxi = INT_MIN;
    int n = v.size();

    for(int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }

    return maxi;
}

long long calculatehours(vector<int>& v, int hourly) {
    long long totalhours = 0;
    int n = v.size();

    for(int i = 0; i < n; i++) {
        totalhours += ceil((double)v[i] / (double)hourly);
    }

    return totalhours;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    int s = 1, e = findmax(v);

    while(s <= e) {
        int mid = s + (e - s) / 2;
        long long th = calculatehours(v, mid);

        if(th <= h) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return s;
}