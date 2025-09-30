class Solution {
public:
    int multi(int n)   //mutiply all digit in n.
    {
        int mult=1;
        while(n!=0)
        {
        int digit=n%10;
        mult*=digit;
        n=n/10;
        }
        return mult;
    }
    
    int add(int n)   //add all digit in n.
    {
        int addnum=0;
        while(n!=0)
        {
        int digit=n%10;
        addnum+=digit;
        n=n/10;
        }
        return addnum;
    }


    int subtractProductAndSum(int n) {
        
        return multi(n)-add(n);
    }
};