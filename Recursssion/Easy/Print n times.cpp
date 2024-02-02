vector<string> printNTimes(int n) {
    if(n==0){
        vector<string> name;
     return name;
    }
    vector<string> name =printNTimes(n-1);
    name.push_back("Coding Ninjas");
    return name;
}