class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>p;
        int flag=0;
        int res;
        for(int i=left;i<=right;i++)
        {
        int temp=i;
        while(temp){
            res=temp%10;
            temp=temp/10;
            if(res==0) {
                flag=0;
                break;
            }
            if(i%res==0)
            flag++;
            else{
            flag=0;
            break;}
            

        }
        if(flag!=0)
        p.push_back(i);
    
        }
        return p;
        
}
};
