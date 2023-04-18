class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>p;
        int t;
        int res;
        for(int i=0;i<nums.size();i++){
            vector<int>v;
            if(nums[i]>9){
                t=nums[i];
                while(t){
                res=t%10;
                v.push_back(res);
                t=t/10;}
            reverse(v.begin(),v.end());
            }
            for(int i=0;i<v.size();i++){
                p.push_back(v[i]);
            }
        }
        return{p};
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9)
            count++;
        }
        if(count==nums.size()-1)
        return{nums};
       
    }
};
