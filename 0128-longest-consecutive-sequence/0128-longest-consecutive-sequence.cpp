class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int temp = 1;
        if(nums.empty()) return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            if(nums[i]+1==nums[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            temp = max(temp,count);
        }
        return temp;
    }
};