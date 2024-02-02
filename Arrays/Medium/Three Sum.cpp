vector<vector<int>> triplet(int n, vector<int> &arr){
      vector<vector<int>>ans;
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++)
  {
      if(i>0 &&arr[i-1]==arr[i])continue;
      int j=i+1;
      int k=n-1;
      while(j<k)
      {
          int sm=arr[i]+arr[j]+arr[k];
          if(sm<0){
           j++;
          }
          else if(sm>0){
           k--;
          }
          else{
            vector<int>tmp={arr[i],arr[j],arr[k]};
            ans.push_back(tmp);
            j++;k--;
            while(j<n && arr[j-1]==arr[j])j++;
            while(k>0 && arr[k]==arr[k+1])k--;
          }
      }
  }
  return ans;

}
