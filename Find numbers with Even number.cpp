class Solution {
public:
    int findNumbers(vector<int>& nums)
    {
        int count=0;
        int count1=0;
        int k;
        for(int i=0;i<nums.size();i++){
        count=0;
        k=nums[i];
         while(k){
          k=k/10;
          count++;}
          if(count%2==0)
          count1++;
        }
        return count1;
    }
};
