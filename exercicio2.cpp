#include <iostream>
#include <vector>

struct Student {
    int id;
    int grade;
};

class Solution {
public:
       void insertionSortStudents(std::vector<Student>& students) {
        int n = students.size();
        for (int i = 1; i < n; ++i) {
            Student key = students[i];
            int j = i - 1;
         
            while (j >= 0 && students[j].grade > key.grade) {
                students[j + 1] = students[j];
                j--;
            }
            students[j + 1] = key;
        }
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].id >> students[i].grade;
    }

    Solution solution;
    solution.insertionSortStudents(students);

    for (int i = 0; i < n; ++i) {
        std::cout << students[i].id << " " << students[i].grade << "\n";
    }

    return 0;
}
