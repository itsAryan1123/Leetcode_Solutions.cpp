class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentsum = 0;    

        for (int i = 0 ; i < nums.size(); i++){

            currentsum = currentsum + nums[i];
            nums[i] = currentsum;
        }

        return nums;
    }
};
