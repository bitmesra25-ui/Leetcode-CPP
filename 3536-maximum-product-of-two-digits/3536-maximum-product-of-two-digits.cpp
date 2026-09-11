class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        int x=s[0]-'0';
        int y=s[1]-'0';
        return x*y;
    }
};