class Solution {
public:

int search(string s , int i , int j){
    int count = 0;
    while(i>=0 && j<=s.length() && s[i] == s[j]){
        i--;
        j++;
        count++;
    }
    return count;
}
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i<s.length(); i++){
            int oddcheck = search(s,i,i);
            count = count + oddcheck;
            int evencheck = search(s,i,i+1);
            count = count + evencheck;
        }
        return count;
        
    }
};