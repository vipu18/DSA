class Solution {
	public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int ans = 1, count = 1, i = 1, j = 0;
    	while(i<n && j<n){
    	    if(arr[i] <= dep[j]){
    	        count++;
    	        i++;
    	    }
    	    else{
    	        count--;
    	        j++;
    	    }
    	   ans= max(ans, count);
    	}
    return ans;
    }
};