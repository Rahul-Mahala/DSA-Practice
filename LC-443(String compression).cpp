class Solution {
public:
    int compress(vector<char>& s) {
        int i = 0;
        char curr_char = 0;
        int index = 0;
        int count = 0;
        int n = s.size();

        while(i<n){
            curr_char = s[i];
            count = 0;
        while(i < n && curr_char == s[i]){
            count++;
            i++;
        }
        s[index] = curr_char;
        index++;

        if(count > 1){
            string new_str = to_string(count);
            for(int i = 0; i<new_str.size(); i++){
                s[index] = new_str[i];
                index++;
            }
        }
        }
        return index;
    }
};