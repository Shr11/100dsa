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

// Better approach (no need to count & O(1)

bool BettercontainsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> dupli;

        for (int num : nums)
        {
            if (dupli[num] >= 1)
                return true;

            else
            // unordered_map[key]; creates a correspondin key = 0
                dupli[num]++;
        }

        return false;
    }
}; 
