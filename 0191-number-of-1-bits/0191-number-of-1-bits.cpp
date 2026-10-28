class Solution {
public:
    int hammingWeight(int n) {
        int count;
        while(n){
            if((n&1) == 1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
};