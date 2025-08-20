class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            return true;
        else 
            return false;
    }
    string reverseVowels(string s) {


        int left=0;
        int right=s.size()-1;
      

        while(left<right)
        {
            if(!isVowel(s[left]))
            {
                left++;
            }
            else if(!isVowel(s[right]))
            {
                right--;
            }
            else
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }  return s;      
    }
};