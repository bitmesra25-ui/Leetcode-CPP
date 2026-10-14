class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }
        int a = sum / 9;
        int b = sum % 9;
        string ans;
        ans.reserve(num);
        ans.append(a, '9');
        if (b > 0){
            ans.push_back('0' + b);
        }
        ans.append(num - a - (b > 0), '0');
        return ans;
    }
};