class Solution {
public:
    int romanToInt(string s) {
        vector<int> values{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> symbol{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        int i = 0, sum = 0;
        while (i < s.size()) {
            for (int j = 0; j < 13; j++) {
                if (s.substr(i, symbol[j].size()) == symbol[j]) {
                    sum += values[j];
                    i += symbol[j].size();
                    break;
                }
            }
        }
        return sum;
    }
};