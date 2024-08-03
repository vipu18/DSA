class Solution {
  public:
    int countNodes(int i) {
        if(i == 1) return 1;
        return 2*countNodes(i-1);
    }
};