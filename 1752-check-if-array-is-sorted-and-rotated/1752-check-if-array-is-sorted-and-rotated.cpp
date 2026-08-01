class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<=n-2;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
            }
        }
        if(nums[0]<nums[n-1]){
            cnt++;
        }
        if(cnt>=2){
            return false;
        }
        else{
            return true;
        }
    }
};