class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int start = 0;
    int end = nums.size();
    int i = 0;
    while(i<end){
        if(nums[i] != 0){
            swap(nums[i] , nums[start]);
            start++;
            i++;
        }
        else{
            i++;
        }
    }
    }
};