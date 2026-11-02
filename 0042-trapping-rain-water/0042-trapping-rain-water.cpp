class Solution {
public:

    vector<int>calcLeft(vector<int>& height,int n){
        vector<int>lftMax(n);
        lftMax[0] = height[0];
        for(int i=1;i<n;i++){
            lftMax[i] = max(lftMax[i-1],height[i]);
        }
        return lftMax;
    }

    vector<int>calcRight(vector<int>& height,int n){
        vector<int>rgtMax(n);
        rgtMax[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
            rgtMax[i] = max(rgtMax[i+1],height[i]);
        }
        return rgtMax;
    }
    
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMax = calcLeft(height,n);
        vector<int>rightMax = calcRight(height,n);
        int sum = 0;
        for(int i=0;i<n;i++){
            int h = min(leftMax[i],rightMax[i])-height[i];
            sum+=h;
        }
        return sum;
    }
};