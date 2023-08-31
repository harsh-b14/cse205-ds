class Solution {
public:
    int combinations(int n, int r){
        int ans = 1;
        for(int i=1; i<=r; i++){
            ans *= n-i+1;
            ans /= i;
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=0; j<=i; j++){
                if(j==0) temp.push_back(1);
                else if(j==i) temp.push_back(1);
                else{
                    int num = combinations(i, j);
                    temp.push_back(num);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};