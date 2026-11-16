class Solution {
public:
    bool CanEatAll(vector<int>& piles,int h,int mid){
        int hours = 0;
        for(int x : piles){
            hours+=x/mid;

            if(x%mid!=0){
                hours++;
            }
        }
        
        return hours<=h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int mid;
        while(l<r){
            mid = l+(r-l)/2;   // Number of bananas per hour
            if(CanEatAll(piles,h,mid)){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};