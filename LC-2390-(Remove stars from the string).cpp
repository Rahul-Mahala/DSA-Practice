class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        string ans = "";
        while(i<s.size()){
            if(s[i] == '*'){
                ans.pop_back();
                i++;
            }
            else if(s[i] != '*'){
                ans.push_back(s[i]);
                i++;
            } 
        }
        return ans;
    }
};