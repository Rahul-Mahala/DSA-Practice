class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(9); // max 9 words as per constraints
        stringstream ss(s);
        string word;
        int maxIndex = 0;
        
        while (ss >> word) {
            int pos = word.back() - '0'; // last char is the position digit
            word.pop_back(); // remove the digit
            words[pos - 1] = word; // store at correct position (1-indexed)
            maxIndex = max(maxIndex, pos);
        }
        
        string result;
        for (int i = 0; i < maxIndex; i++) {
            result += words[i];
            if (i != maxIndex - 1) result += " ";
        }
        
        return result;
    }
};