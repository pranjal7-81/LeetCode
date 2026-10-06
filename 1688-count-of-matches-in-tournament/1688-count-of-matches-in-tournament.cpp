class Solution {
public:
    int numberOfMatches(int n) {
        int nom = 0;
        while(n>1){
        
            if(n%2==0){
                nom += n/2;
                n/=2;
            }
            else{
                nom += (n-1)/2;
                n = (n-1)/2+1;
            }
        }
        return nom;
    }
};