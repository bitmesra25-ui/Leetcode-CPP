class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_set<int>Set;
        int sumA=0;
        int sumB=0;
        for(int i=0;i<aliceSizes.size();i++){
            sumA+=aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++){
            sumB+=bobSizes[i];
            Set.insert(bobSizes[i]);
        }
        int diff=(sumB-sumA)/2;
        for(int x:aliceSizes){
            if(Set.count(x+diff)){
            return {x,x+diff};
            }
        }
        return {};
    }
};