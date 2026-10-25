class Solution {
public:
    
    int count1Bits(int num){
        int count = 0;
        while(num!=0){
            count += (num & 1);
            num>>=1;
        }
        return count;
    }
    
    
    vector<int> sortByBits(vector<int>& arr) {
        
        auto lambda = [&](int &a,int &b){
            int cA = count1Bits(a);
            int cB = count1Bits(b);
            if(cA==cB){
                return a<b;
            }
            return cA<cB;
        };

        
        
        sort(arr.begin(),arr.end(),lambda);
        return arr;

    }
};