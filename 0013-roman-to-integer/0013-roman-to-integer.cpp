class Solution {
public:

    //function which convert roman to number.
    int num(char c)
    {
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        else  return 1000;
    }
    int romanToInt(string s) {
        int sum=0,index=0;
        while(index<s.size()-1)
        {
            if( num(s[index])< num(s[index+1]) )  //if next index is greater than present index then present will be negitve sum.
                sum-=num(s[index]);
            else
                sum+=num(s[index]);
            index++;
        }
        sum+=num(s[s.size()-1]);  //last element of string.
        return sum;
    }
};