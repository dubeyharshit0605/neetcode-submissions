class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int cnt=0;
        int l=0,r=arr.size()-1;
        while(l<=r){
            int remain=limit-arr[r--];
            cnt++;
            if(remain>=arr[l]&&l<=r){
                l++;
            }
        }
        return cnt;
    }
};