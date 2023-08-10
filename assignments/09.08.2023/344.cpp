class Solution {
public:
    void swap(int left, int right, vector<char>& s){
        if(left >= right) return;
        ::swap(s[left++], s[right--]);
        swap(left, right, s);
    }
    void reverseString(vector<char>& s) {
        swap(0, s.size()-1, s);
    }
};