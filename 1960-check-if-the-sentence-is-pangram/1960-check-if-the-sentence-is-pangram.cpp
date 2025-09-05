class Solution {
public:
    bool checkIfPangram(string sentence) {
        //create boolean vector to store each element of sentence.
        vector<bool> ans(26,0);
        for(int i=0;i<sentence.size();i++)
        {
            int index=sentence[i]-'a';   //convert alphabet to integer.
            ans[index]=1;        // store 1 for each letter index.
        }

        //check if any 0 present in any index.
        for(int i=0;i<26;i++)
        {
            if(ans[i]==0) return 0;
        }
        return 1;
       
    }
};