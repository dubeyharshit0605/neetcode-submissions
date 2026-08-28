class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        map<int,int>freq;
        int n=arr.size();
        set<int>st;
       for(int i=0;i<n;i++){
           freq[arr[i]]++;
           st.insert(arr[i]);
       }
       vector<int>brr;
       for(auto i:st){
        if(freq[i]>=2){
            brr.push_back(i);
            brr.push_back(i);
        }else if(freq[i]==1){
             brr.push_back(i);
        }
       }
       arr=brr;
       return brr.size();

    }

};