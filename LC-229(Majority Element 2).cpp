class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int count2 = 0;
        int majelement1 = INT_MIN;
        int majelement2 = INT_MIN;
        for(int i = 0; i<n; i++){
            if(nums[i] == majelement1){
                count1++;
            }
            else if(nums[i] == majelement2){
                count2++;
            }
            else if(count1 == 0){
                majelement1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                majelement2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        int freq1 = 0;
        int freq2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == majelement1){
                freq1++;
            }
            else if(nums[i] == majelement2){
                freq2++;
            }
        }
        vector<int>result;
        if(freq1 > n/3){
            result.push_back(majelement1);
        }
        if(freq2 > n/3){
            result.push_back(majelement2);
        }
        return result;
    }
};