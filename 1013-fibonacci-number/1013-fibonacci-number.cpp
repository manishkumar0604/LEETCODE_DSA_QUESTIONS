class Solution {
public:
    int fib(int n) {
        // if(n<=1) return n;
        // return fib(n-2)+fib(n-1);  //recursive call for fabonacci series.
        
        if (n <= 1) return n;

        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            int temp = a + b;     // temp=>0+1=1
            a = b;   //a=1
            b = temp;  //b=1
        }

        return b;
    }
};