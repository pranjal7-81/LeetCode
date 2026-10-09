class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int first = pq.top()-1;
        pq.pop();
        int second = pq.top()-1;
        return first * second;
    }
};