class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            if(nums.size()<=1){
            return nums[i];
        }
            if(nums[i]!=nums[i+1])
        {
            continue;
        }
          return nums[i];
           break;
        }
    }
};