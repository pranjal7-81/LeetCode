class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int temp = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            temp = max(temp,count);
        }
        return temp;
    }
};