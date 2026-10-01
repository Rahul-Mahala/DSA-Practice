class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       int i = 0;
       int j = i+1;
       int pairs = 0;
       sort(nums.begin(),nums.end());
       int size = nums.size();
       while(j<size){
        if(i==j){
            j++;
            if(j>=size){
                break;
            }
        }
        int diff = nums[j] - nums[i];
        if(diff == k){
            pairs++;
            int a = nums[i];
            int b = nums[j];
            while(i<size && nums[i] == a){
            i++;
        }
            while(j<size && nums[j] == b){
            j++;
        }
       }
        else if (diff < k){
            j++;
        }
        else{
            i++;
        }
       }
       return pairs; 
    }
};