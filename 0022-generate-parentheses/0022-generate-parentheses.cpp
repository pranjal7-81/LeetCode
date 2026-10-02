class Solution {
public:
    void par(int n,int L ,int R,vector<string>&ans,string&temp){
        if(L+R==2*n){
            ans.push_back(temp);
            return;
        }
        if(L<n){
            temp.push_back('(');
            par(n,L+1,R,ans,temp);
            temp.pop_back();
        }
        if(L>R){
            temp.push_back(')');
            par(n,L,R+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        par(n,0,0,ans,temp);
        return ans;

    }
};