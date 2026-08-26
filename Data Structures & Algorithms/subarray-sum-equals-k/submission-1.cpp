class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>pre(n);
        pre[0]=arr[0];
        int cnt=0;
        int ans=0;
         for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
         }
        map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            ans+=mpp[(pre[i]-k)];
             mpp[pre[i]]++;
            
        }
        return ans;
    }
};