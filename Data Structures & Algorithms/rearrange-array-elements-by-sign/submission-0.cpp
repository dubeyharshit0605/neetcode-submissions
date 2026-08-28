class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int>p,n,f;
        int n1=arr.size();
        for(int i=0;i<n1;i++){
         if(arr[i]>0) p.push_back(arr[i]);
        else if(arr[i]<0) n.push_back(arr[i]);
        }
        for(int i=0;i<n1/2;i++){
           f.push_back(p[i]);
            f.push_back(n[i]);  
        }
        return f;
    }
};