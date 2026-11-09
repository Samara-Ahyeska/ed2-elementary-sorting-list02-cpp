#include <iostream>
#include <vector>

class Solution {
public:
    void insertSorted(std::vector<int>& nums, int key) {
        nums.push_back(key);
        int n = nums.size() - 1; 
        int j = n - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, key;
    if (!(std::cin >> n >> key)) return 0;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    Solution solution;
    solution.insertSorted(nums, key);
    for (size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << (i + 1 == nums.size() ? "" : " ");
    }
    std::cout << "\n";

    return 0;
}
