class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
     int low=*max_element(weights.begin(),weights.end());
     int high=0;
     for(int w:weights){
        high+=w;
     }   
     while(low<=high){
        int mid=low+(high-low)/2;
        int daycount=1;
        int load=0;
        for(int w:weights){
            if(load+w<=mid){
                load+=w;
            }else{
                daycount++;
                load=w;
            }
        }
        if(daycount<=days){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     return low;
    }
};