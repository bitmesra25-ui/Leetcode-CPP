class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=1LL*nums[i]*nums[i];
        }
        sort(ans.rbegin(),ans.rend());
        long long even=0;
        long long odd=0;
        int evencnt=(n+1)/2;
        for(int i=0;i<n;i++){
            if(i<evencnt){
                even+=ans[i];
            }
            else{
                odd+=ans[i];
            }
        }
        return even-odd;
    }
};