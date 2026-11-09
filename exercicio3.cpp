#include <iostream>
#include <vector>

class Solution {
public:
    int findMedian(std::vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; ++i) {
            int key = nums[i];
            int j = i - 1;
            
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
        int medianIndex = (n - 1) / 2;
        return nums[medianIndex];
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
    int median = solution.findMedian(nums);
    std::cout << median << "\n";

    return 0;
}
