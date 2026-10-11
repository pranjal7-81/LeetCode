class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char x : s){
            mp1[x]++;
        }
        for(char x : t){
            mp2[x]++;
        }

        if(mp1==mp2){
            return true;
        }
        return false;

    }
};