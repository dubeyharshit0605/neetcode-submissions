class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        int cnt=1;
        while(!pq.empty()){
            if(cnt==k){
                return pq.top();
            }
            pq.pop();
            cnt++;
        }
        return pq.top();
    }
};
