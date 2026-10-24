class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int pile : piles){
            pq.push(pile);
        }
        while(k--){
            int temp = pq.top();
            pq.pop();
            temp = (temp+1)/2;
            pq.push(temp);
        }
        int ans = 0;
        while(!pq.empty()){
            int temp = pq.top();
            pq.pop();
            ans+=temp;
        }
        return ans;

    }
};