class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int element_sum=0;
        int digit_sum=0;
        for(int i=0;i<n;i++){
            element_sum+=nums[i];
            int current=nums[i];
            while(current>0){
            digit_sum+=current%10;
            current /=10;
            }
        }
        return abs(element_sum-digit_sum);
    }
};