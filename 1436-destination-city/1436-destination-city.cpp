class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp;
        for(auto path : paths){
            string s = path[0];
            mp[s] = 1;
        }
        for(auto path : paths){
            string d = path[1];
            if(mp[d]==0){
                return d;
            }
        }
        return "";

    }
};