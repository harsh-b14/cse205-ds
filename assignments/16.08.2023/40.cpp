class Solution {
public:
    void solve(int idx, int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = idx; i < candidates.size(); i++){
            if(i != idx && candidates[i] == candidates[i-1]) continue;
            if(candidates[idx] > target) break;
            temp.push_back(candidates[i]);
            solve(i+1, target - candidates[i], candidates, temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0, target, candidates, temp, ans);
        return ans;
    }
};