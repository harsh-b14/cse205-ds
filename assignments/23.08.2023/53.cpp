class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, n = nums.size(), maxi = -111111;
        for(int i=0; i<n; i++){
            sum += nums[i];
            maxi = max(maxi, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};