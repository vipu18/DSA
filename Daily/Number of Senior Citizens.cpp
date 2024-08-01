class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(string& pax: details){
            int age = stoi(pax.substr(11, 2));
            if(age > 60){
                cnt++;
            }
        }
        return cnt;
    }
};