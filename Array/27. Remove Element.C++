#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int n = nums.size();
        int a = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[a++] = nums[i];
            }
        }

        return a;
    }
};
