class Solution {
public:
using ll=long long;
    int maxFrequency(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int head=-1;
        int tail=0;
        int n=arr.size();
        int maxi=0;
        ll sum=0;
        while(tail<n){
            while(head+1<n){
                head++;
                sum=sum+arr[head];

                ll cost=1ll*arr[head]*(head-tail+1)-sum;
                if(cost>k){
                    sum=sum-arr[head];
                    head--;
                    break;
                }
            }
            maxi=max(maxi,head-tail+1);
            if(tail>head){
                head=tail-1;
                tail++;
            }else{
                sum=sum-arr[tail];
                tail++;
            }
        }
        return maxi;
    }
};