class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums);
        
        ans.insert(ans.end(), nums.begin(), nums.end());

        return ans ;
    }

// Better way
vector<int> getConcatenationAGAIN(vector<int>& nums) {
        // Better Approach , space = O(1)
        int n = nums.size();
        for (int i=0; i<n; i++)
            nums.push_back(nums[i]);
        
        return nums;
    }
};
