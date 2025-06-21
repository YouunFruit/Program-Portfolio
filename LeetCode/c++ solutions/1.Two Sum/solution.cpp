class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int x = 0; x < nums.size();x++){
            for(int y = 0; y < nums.size();y++){
                if(x == y) continue;
                if(nums[x] + nums[y] == target) return {x,y};
            }
        }
        return {};
    }
};