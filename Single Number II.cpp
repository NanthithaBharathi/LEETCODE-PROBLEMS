class Solution {
public:
    int singleNumber(vector<int>& n) {
        
        int count=0;
        for(int i=0;i<n.size();i++)
        {
            count=0;
            for(int j=0;j<n.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(n[i]==n[j])
                {
                    count++;
                }
        
            }    
               if(count==0)
                {
                    return n[i];
                }
        }
        return -1;
    }
};
