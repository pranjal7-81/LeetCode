class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0,end = 0;
        int n  = s.size();
        int len = 0;
        vector<bool>visited(256,0);
        while(end<n){
            visited[s[end]] = 1;
            len = max(len,end-start+1);
            end++;
            while(visited[s[end]]){
                visited[s[start]] = 0;
                start++;
            }
        }
        return len;
    }
};