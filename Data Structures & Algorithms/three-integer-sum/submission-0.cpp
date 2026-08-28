class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>brr;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            if(i>0&&arr[i]==arr[i-1]) continue;
            while(j<k){
              if(arr[i]+arr[j]+arr[k]==0){
                 brr.push_back({arr[i],arr[j],arr[k]});
                 j++;
                 k--;
                  while(j<k && arr[j]==arr[j-1]){
                        j++;
                    }
                    while(j<k && arr[k]==arr[k+1]){
                        k--;
                    }
              }else if(arr[i]+arr[j]+arr[k]>0){
                k--;
              }else{
                j++;
              }
            }
        }
        return brr;
        
    }
};
