#include <iostream>
#include <vector>

class Solution {
public:
    bool isSorted(const std::vector<int>& nums) {
        for (size_t i = 0; i + 1 < nums.size(); ++i) {
            if (nums[i] > nums[i + 1]) {
                return false; // UNSORTED
            }
        }
        return true; // SORTED
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    Solution solution;
    if (solution.isSorted(nums)) {
        std::cout << "SORTED\n";
    } else {
        std::cout << "UNSORTED\n";
    }

    return 0;
}
