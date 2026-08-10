class Solution {
public:
    bool validDigit(int n, int x) {
        bool flag=false;
        while(n>9){
            flag=flag || (n%10==x);
            n=n/10;
        }
        return flag && (n%10!=x);        
    }
};