class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int n = arr.size();
        int last = arr[n-1];
        int idx = 0;
        for(int i=1; i<=last+k; i++){
            int flag = 0;
            if(idx<n) {
                if(arr[idx] == i){
                    idx++;
                    flag = 1;
                }         
            }
            if(flag == 0)   missing.push_back(i);
        }
        return missing[k-1];
    }
};