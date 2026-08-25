class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& arr) {
        double sum=0;
        double time=0;
       for(int i=0;i<arr.size();i++){
         if(time<arr[i][0]) time=arr[i][0];
         time=time+arr[i][1];
         sum=sum+(time-arr[i][0]);
       }
       return sum/arr.size();
    }
};