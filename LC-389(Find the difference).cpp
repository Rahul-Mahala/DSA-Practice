class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        for(int i = 0; i<t.size();i++){
            char c = t[i];
         sum = sum + c;
        }
        for(int i = 0; i<s.size();i++){
            char c = s[i];
         sum = sum - c;
        }
        char result = sum;
        return result;
    }
};