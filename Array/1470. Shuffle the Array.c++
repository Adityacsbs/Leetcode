#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        int k = 2 * n;
        std::vector<int> ans(k);

        for (int i = 0; i < n; ++i) {
            ans[2 * i] = nums[i];        // Take element from the first half
            ans[2 * i + 1] = nums[i + n]; // Take element from the second halfh
        }

        return ans;
        
    }
};
