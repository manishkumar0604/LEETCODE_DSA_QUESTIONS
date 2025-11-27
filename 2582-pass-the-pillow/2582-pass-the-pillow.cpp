class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle=2*(n-1);
        int t =time%cycle;
        if(t<n)
            return t+1;
        else
            return n-(t-(n-1));
    }
};
