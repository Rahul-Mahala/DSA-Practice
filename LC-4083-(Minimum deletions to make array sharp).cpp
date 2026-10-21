class Solution {
public:
    int minDeletions(vector<int>& nums) {
      int n = nums.size();
        int i = 0;
        int count = 0;
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                count++;
                i++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};