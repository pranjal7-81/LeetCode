class Solution {
public:
    typedef pair<char,int> P;
    struct lambda{
        bool operator()(P &P1, P &P2){
            return P1.second < P2.second;
        }
    };
    string frequencySort(string s) {
        string ans = "";
        priority_queue<P,vector<P>,lambda>pq;
        unordered_map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        
        for(auto it : mp){
            pq.push({it.first,it.second});
        }
        while(!pq.empty()){
            P temp = pq.top();
            pq.pop();
            ans += string(temp.second,temp.first);
        }
        return ans;
    }
};