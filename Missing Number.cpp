class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
       int dummy=0;
       for(int i=0;i<nums.size();i++){
           if(dummy!=nums[i]){
               return dummy;
           }
           dummy++;
       }
       return nums[nums.size()-1]+1;
    }
};
