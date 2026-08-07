class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int single=0;
       int double_digit=0;
       for(int i=0;i<n;i++){
        if(nums[i]<=9){
            single+=nums[i];
        }
        else if(nums[i]>=10){
            double_digit +=nums[i];
        }
       }
       if(single>double_digit || double_digit>single){
        return true;
       }
       else 
       return false;
    }
};