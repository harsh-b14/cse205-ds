class Solution {
public:
    void solve(int i, int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>&ans){
        if(i==candidates.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[i] <= target){
            temp.push_back(candidates[i]);
            solve(i, target-candidates[i], candidates, temp, ans);
            temp.pop_back();
        }
        solve(i + 1, target, candidates, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0, target, candidates, temp, ans);
        return ans;
    }
};