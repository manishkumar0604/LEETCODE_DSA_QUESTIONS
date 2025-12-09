class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count=0;
        string repeated=word;

        while(sequence.find(repeated) != string::npos) {
            count++;
            repeated+=word; // repeat again
        }
        return count;
    }
};
