class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>p;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) 
            p.push_back(nums[i]);}
        for(int i=0;i<p.size();i++){
            nums[i]=p[i];
            }
        for(int i =p.size();i<nums.size();i++){
            nums[i]=0;
        }
        }
};
