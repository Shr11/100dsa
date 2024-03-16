// LeetCode pno. 525

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0, -1);
        int sum = 0;

        for (i = 0; i < nums.length(); i++) {
            if (nums[i] == 0)
            {
                sum += -1;
            }
            else if (nums[i] == 1)
            {
                sum += 1;
            }
        }

        if (map.comtainsKey(sum))
        {
            ans = Math.max(ans , i - map.get(sum));
        }

        else
        {
            map.put(sum, i);
        }

        return ans;
    }
};
