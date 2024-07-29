class Solution {
public:
    bool static comp(Item a, Item b) {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        sort(arr, arr + n, comp);
        int currWeight = 0;
        double finalValue = 0.0;
        for (int i = 0; i < n; i++) {
            if (currWeight + arr[i].weight <= w) {
                currWeight += arr[i].weight;
                finalValue += arr[i].value;
            } else {
                int remainingWeight = w - currWeight;
                finalValue += (arr[i].value / (double)arr[i].weight) * (double)remainingWeight;
                break;
            }
        }
        return finalValue;
    }
};