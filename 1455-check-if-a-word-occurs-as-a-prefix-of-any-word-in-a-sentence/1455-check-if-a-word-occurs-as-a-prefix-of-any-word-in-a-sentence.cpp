class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index=1;
        string word="";

        for (char c : sentence) {
            if (c == ' ') {
                if (word.substr(0, searchWord.size()) == searchWord)  return index;
                word = "";
                index++;
            } else {
                word+=c;
            }
        }

        // check last word
        if (word.substr(0, searchWord.size()) == searchWord)
            return index;

        return -1;
    }
};
