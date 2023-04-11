class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int s=0;
        s=*max_element(candies.begin(),candies.end());
        vector<bool>v;
        int k=0,r=0;
        for(int i=0;i<candies.size();i++){
            k=candies[i];
            r=k+extraCandies;
            if(r>=s)
             v.push_back(1);
            else
             v.push_back(0);
        }
    return{v};
        
    }
};
