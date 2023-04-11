class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int>v;
        for(int i=0;i<heights.size();i++){
        v.push_back(heights[i]);
        }
        sort(v.begin(),v.end());
        int count=0;
         for(int i=0;i<heights.size();i++){
             for(int j=0;j<v.size();j++){
                 if(i==j){
                 if(heights[i]!=v[j])
                 count++;}
           }
         }
     return count;
    }
};
