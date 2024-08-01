class Solution {
public:
    int maximum69Number (int num) {
        string numb = to_string(num);
        for(char& ch: numb){
            if(ch == '6'){
                ch = '9';
                break;
            }
        }
        return stoi(numb);
    }
};