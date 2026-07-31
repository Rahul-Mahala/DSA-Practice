class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int start = 0;
        int size = nums.size()-1;
        int maxi = 1;
        int count = 1;
        int result = nums[0];
        sort(nums.begin(),nums.end());
            for(int i = 0; i<size; i++){
                if(nums[i] == nums[i+1]){
                count++;
                }
            else{
                count = 1;
            }
            if(count > maxi){
                maxi = count;
                result = nums[i];
            }
        }
        return result;
        
    }
};