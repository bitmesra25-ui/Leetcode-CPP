class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0 && k>0){
                nums[i]=-nums[i];
                k--;
            }
        }
        int sum=0;
        int mini=nums[0];
        for(int num:nums){
            sum+=num;
            mini=min(num,mini);
        }
        if(k%2!=0){
            sum-=2*mini;
        }
        return sum;
    }
};