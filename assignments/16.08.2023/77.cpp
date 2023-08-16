class Solution {
public:
    void solve(int n, int k, vector<int>& temp, vector<vector<int>>& ans){
        if(n==0){
            if(temp.size() == k){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(n);
        solve(n-1, k, temp, ans);
        temp.pop_back();
        solve(n-1, k, temp, ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(n, k, temp, ans);
        return ans;
    }
};