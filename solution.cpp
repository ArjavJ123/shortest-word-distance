class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int minD = wordsDict.size();
        int i1 = -1, i2 = -1;
        for(int i=0; i<wordsDict.size(); i++) {
            if(wordsDict[i] == word1) {
                i1 = i;
            }
            else if(wordsDict[i] == word2) {
                i2 = i;
            }
            
            if(i1 != -1 && i2 != -1) {
                minD = min(minD, abs(i2-i1));
            }
        }
        return minD;
    }
};
