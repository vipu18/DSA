class Solution{
public:
        void heapify(std::vector<int>& arr, int N, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < N && arr[left] > arr[largest]) largest = left;
        if (right < N && arr[right] > arr[largest]) largest = right;

        if (largest != i) {
            std::swap(arr[i], arr[largest]);
            heapify(arr, N, largest); // Correct order of arguments
        }
    }

    void convertMinToMaxHeap(std::vector<int>& arr, int N) {
        // Start from the last internal node and heapify each one
        for (int i = (N - 2) / 2; i >= 0; i--) {
            heapify(arr, N, i); // Correct order of arguments
        }
    }
};
