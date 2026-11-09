#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void taskScheduling(std::vector<int>& durations) {
        int n = durations.size();
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (durations[j] < durations[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                std::swap(durations[i], durations[minIndex]);
            }
        }
    }
    
    long long calculateTotalCompletionTime(const std::vector<int>& durations) {
        long long currentTime = 0;
        long long totalCompletionTime = 0;
        
        for (int duration : durations) {
            currentTime += duration;
            totalCompletionTime += currentTime;
        }
        
        return totalCompletionTime;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> durations(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> durations[i];
    }

    Solution solution;
    solution.taskScheduling(durations);
    for (int i = 0; i < n; ++i) {
        std::cout << durations[i] << (i + 1 == n ? "" : " ");
    }
    std::cout << "\n";
    long long totalTime = solution.calculateTotalCompletionTime(durations);
    std::cout << totalTime << "\n";

    return 0;
}
