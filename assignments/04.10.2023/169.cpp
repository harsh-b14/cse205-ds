class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0];
        int cnt = 1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == element) cnt++;
            else cnt--;
            if(cnt == 0 && i>0){
                cnt = 1;
                element = nums[i];
            }
        }
        return element;
    }
};