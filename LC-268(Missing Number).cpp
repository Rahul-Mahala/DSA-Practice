class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n*(n+1)/2;
        int sum2 = 0;
        int ans = 0;
        for(int i = 0; i<=n-1;i++){
         sum2 = sum2 + nums[i];
        }
        ans = sum1 - sum2;
        return ans;
    }
};