class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1,post=1,n=nums.size();
        vector<int>out(n,1);
        for(int i=0;i<nums.size();i++){
            out[i]=pre;
            pre*=nums[i];}

        for(int i=n-1;i>=0;i--){
            out[i]*=post;
            post*=nums[i];
        }
        return out;
    }
};
