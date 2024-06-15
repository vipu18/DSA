class Solution {
  public:
    int extractMax() {
        int result = H[0];
        H[0] = H[s];
        s--;
        shiftDown (0);
        return result;
    }
};
