long long fac1 = 1;
long long factorial = 1;

void fact(long long x, vector<long long> &ans) {
    if (fac1 <= x) {
        factorial = fac1 * factorial;
        if (factorial <= x) {
            ans.push_back(factorial);
            fac1++;
            fact(x, ans);
        }
    }
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    fact(n, result);
    return result;
}
