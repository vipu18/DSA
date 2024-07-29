class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int sum = 1, i = 1;
        while(i<n){
            if(ratings[i] == ratings[i-1]){
                sum+= 1; 
                i++; 
                continue;
            }
            int peak = 1;
            while(i<n && ratings[i] > ratings[i-1]){
                peak ++;
                sum += peak;
                i++;
            }
            int down = 1;
            while(i<n && ratings[i] < ratings[i-1]){
                sum += down;
                i++;
                down++;
            }
            if(peak < down)sum += down - peak;
        }
        return sum;
    }
};