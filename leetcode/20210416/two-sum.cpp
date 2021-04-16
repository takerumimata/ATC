class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         // two sumなので、二つの数字の組み合わせを考えればいい
        vector<int> value;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    value.push_back(i);
                    value.push_back(j);
                    return value;
                }
            }
        }
        return value;
    }
};