#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>

class Solution {
public:
    int getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_set<int> numSet(nums1.begin(), nums1.end());
        int smallest = INT_MAX;

        for (int i = 0; i < nums2.size(); i++) {
            if (numSet.find(nums2[i]) != numSet.end()) {
                smallest = std::min(smallest, nums2[i]);
            }
        }

        return (smallest == INT_MAX) ? -1 : smallest;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums1 = {2, 4, 7, 5};
    std::vector<int> nums2 = {9, 2, 3, 6};

    int result = solution.getCommon(nums1, nums2);
    std::cout << "The smallest common element is: " << result << std::endl;

    return 0;
}
