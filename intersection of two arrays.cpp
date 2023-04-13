class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>p;
        for(auto it=nums1.begin();it<nums1.end();it++){
            for(auto it1=nums2.begin();it1<nums2.end();it1++){
                if(*it==*it1){
                    p.insert(*it1);

                    
                }
            }
        }
        nums1.clear();
        for(auto x:p)
        {
            nums1.push_back(x);
        }
        return {nums1};
     }
};
