class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // we use unordered_set as it uses O(1) compared to O(logn) complexity of set 
        unordered_set<int> dupli;
        // Too much Runtime

        // for (int i = 0; i<nums.size(); i++)
        // {
        //     dupli.emplace(nums[i]);
        // }

        // return dupli.size() != nums.size();


        for (int num : nums)
        {
            if (dupli.count(num) > 0)
                return true;

            else
                dupli.emplace(num);
        }

        return false;
    }
}; 
