class Solution {
public:
    vector<int> countBits(int n) {
        int count1 = 0;
        vector<int>ans;
        for(int i=0;i<=n;i++){
            count1 = 0;
            int num = i;
            while(num){
                if((num & 1) == 1){
                    count1++;
                }
                num>>=1;
            }
            ans.push_back(count1);

        }
        return ans;
    }
};