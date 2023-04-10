class Solution {
public:
    int reverse(int x)
    {
       long long int sum=0;
        while(x){
        int r=x%10;
        sum=sum*10+r;
        x=x/10;
        }
        if(sum>=INT_MAX||sum<=INT_MIN)
        {
            return 0;
        }
        return sum;
    }
    
};
