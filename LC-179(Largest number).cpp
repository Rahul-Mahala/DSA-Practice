class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto custom = [](int& a , int& b){
        string s1 = to_string(a);
        string s2 = to_string(b);
        if(s1 + s2 > s2 + s1){
            return true;
        }
        return false;
        };
     sort(nums.begin(),nums.end(),custom);   
     if(nums[0] == 0)
     return "0";
     string result = "";
     for(int i = 0; i < nums.size(); i++){
        int num = nums[i];
        result += to_string(num);
     }
     return result;
    }
};