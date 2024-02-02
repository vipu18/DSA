long long sum = 0;

long long sumFirstN(long long n) {
    if (n > 0) {
        sum = sum + n;
        sumFirstN(n - 1);
    }
    return sum;
}
