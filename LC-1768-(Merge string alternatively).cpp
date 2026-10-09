class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j =0;
        int n = word1.size();
        int m = word2.size();
        string result = "";
            while(i < n &&  j < m){
                result.push_back(word1[i]);
                result.push_back(word2[j]);
                i++;
                j++;
            }
            while(i < n){
                result.push_back(word1[i]);
                i++;
            }
            while(j < m){
                result.push_back(word2[j]);
                j++;
            }
            return result;
    }
};