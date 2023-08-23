class Solution {
public:
    void solve(int n, int left, int right, string s, vector<string>& ans){
        if(left == right && left == n && right == n){
            ans.push_back(s);
            return;
        }
        if(right < left){
            s += ")";
            solve(n, left, right+1, s, ans);
            s.pop_back();
        }
        if(left < n){
            s += "(";
            solve(n, left + 1, right, s, ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int left = 0, right = 0;
        string s = ""; 
        vector<string> ans;
        solve(n, left, right, s, ans);
        return ans;
    }
};