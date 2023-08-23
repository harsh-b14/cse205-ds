class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            string s = to_string(nums[i]);
            int len = s.size();
            if(len % 2 ==0){
                cnt++;
            }
        }
        return cnt;
    }
};