class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k=flowerbed.size();
        int cnt=0;
        for(int i=0;i<k;i++){
            if(flowerbed[i]==0){
           bool left_empty=(i==0 || flowerbed[i-1]==0);
           bool right_empty=(i==k-1 || flowerbed[i+1]==0);
           if(left_empty && right_empty){
            flowerbed[i]=1;
            cnt++;

            if(cnt>=n){
                return true;
            }
           }
            }
        }
        return cnt>=n;
    }
};