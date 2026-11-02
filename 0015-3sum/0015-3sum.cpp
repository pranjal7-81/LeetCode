class Solution {
public:
    void twoSum(vector<int>& nums, int target,vector<vector<int>>&result, int i,int j){
        
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                result.push_back({-target,nums[i],nums[j]});
                i++,j--;
                while(nums[i]==nums[i-1] && i<j){
                    i++;
                    
                }
                while(nums[j]==nums[j+1] && i<j){
                    j--;
                    
                }
            }
        }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int n1 = nums[i];
            int target = -n1;
            twoSum(nums,target,result,i+1,n-1);
        }
        return result;
    }
};