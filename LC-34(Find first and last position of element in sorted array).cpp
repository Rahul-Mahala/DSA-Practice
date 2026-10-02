class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int pos1 = -1;
        int pos2 = -1;
        while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid] == target){
            pos1 = mid;
            e = mid-1;
        }
        else if(nums[mid] > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        }
        s = 0;
        e = nums.size()-1;
        while(s<=e){
              int mid = s + (e-s)/2;
        if(nums[mid] == target){
            pos2 = mid;
            s = mid+1;
        }
        else if(nums[mid] > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        }
        return{pos1,pos2};
    }
};