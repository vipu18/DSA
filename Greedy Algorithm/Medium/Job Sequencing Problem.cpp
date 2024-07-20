/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool compare(Job a, Job b){
        return(a.profit > b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, compare);
        int maxi = arr[0].dead;
        for(int i = 0; i<n; i++){
            maxi = max(maxi, arr[i].dead);
        }
        int slot[maxi+1];
        for(int i = 0; i<= maxi ; i++) slot[i] = -1;
        int countjobs = 0, jobprofit = 0;
        for(int i = 0; i<n; i++){
            for(int j = arr[i].dead; j>0; j--){
                if(slot[j] == -1){
                    slot[j] = 1;
                    countjobs++;
                    jobprofit += arr[i].profit;
                    break;
                }
            }
        }
        vector<int> result = {countjobs, jobprofit};
        return result;
    } 
};