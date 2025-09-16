class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> map;
        for(auto index:stones){
            map[index]++;
        }
        int count=0;
        for(auto stones:jewels){
            count+=map[stones];
        }
        return count;
    }
};