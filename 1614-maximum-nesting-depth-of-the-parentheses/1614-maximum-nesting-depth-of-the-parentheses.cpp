class Solution {
public:
    int maxDepth(string s) {
        int maxx = 0;
        int temp = INT_MIN;
        for(int i=0;i<s.size();i++){
            temp = max(maxx,temp);
            if(s[i]=='('){
                maxx++;
            }
            else if(s[i]==')'){
                maxx--;
            }
            else{
                continue;
            }
        }
        return temp;
    }
};