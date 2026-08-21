class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        if(n < 2)
        return 0;
        sort(nums.begin() , nums.end());
         int maxi = INT_MIN;
            for(int i =0; i<n-1; i++){
            int maximum = nums[i+1] - nums[i];
            maxi = max(maxi , maximum);
            }
        return maxi;
    }
};