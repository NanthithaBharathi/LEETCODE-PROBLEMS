class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        int ans;
        int min;
        if(num1==0 || num2==0)return 0;
        if(num1==num2){
            return 1;
        }
        while(num1!=num2){
        if(num1>=num2){
        min=num2;
        ans=num1-num2;
        num1=ans;
        num2=min;
        count++;
        }
        else{
        min=num1;
        ans=num2-num1;
        num1=min;
        num2=ans;
        count++;
        }}
    return count+1;
       
}
};
