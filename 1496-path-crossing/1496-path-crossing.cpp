class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string>s;
        int x = 0;
        int y = 0;
        string key = to_string(x) + "_" + to_string(y);
        s.insert(key);
        for(char coor : path){
            if(coor=='N'){
                y++;
            }
            else if(coor=='S'){
                y--;
            }
            else if(coor=='E'){
                x++;
            }
            else{
                x--;
            }

            key = to_string(x) + "_" + to_string(y);
            if(s.find(key)!=s.end()){
                return 1;
            }
            s.insert(key);
        }
        return 0;
    }
};