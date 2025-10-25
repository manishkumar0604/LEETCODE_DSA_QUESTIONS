class Solution {
public:
    int totalMoney(int n) {
        int totalMoney=0;  
        int weekStart=1;     
        for(int i=1;i<=n;i++) {
            totalMoney +=weekStart+(i-1)%7; 
            if(i%7==0) weekStart++;  // find when week ends if end then increase by 1$.        
        }
        return totalMoney;
    }
};
