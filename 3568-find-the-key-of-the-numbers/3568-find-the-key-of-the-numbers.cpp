class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int f1=num1%10,f2=num2%10,f3=num3%10;
        num1/=10;
        num2/=10;
        num3/=10;
        int s1=num1%10,s2=num2%10,s3=num3%10;
        num1/=10;
        num2/=10;
        num3/=10;
        int t1=num1%10,t2=num2%10,t3=num3%10;
        num1/=10;
        num2/=10;
        num3/=10;
        int ans=min(f1,min(f2,f3))*1+min(s1,min(s2,s3))*10+min(t1,min(t2,t3))*100+min(num1,min(num2,num3))*1000;
        return ans;
    }
};