class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                if(i%2==0 && nums[j]%2==0){
                swap(nums[i],nums[j]);
                break;
                }
                if(i%2!=0 && nums[j]%2!=0){
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
        return nums;
    }
};