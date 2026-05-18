#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int score;
};

int main() {
    std::vector<Student> students{
        {"Ada", 95},
        {"Bjarne", 88},
        {"Grace", 99},
        {"Linus", 72},
    };

    std::sort(students.begin(), students.end(), [](const Student& lhs, const Student& rhs) {
        return lhs.score > rhs.score;
    });

    const auto passedCount = std::count_if(students.begin(), students.end(), [](const Student& student) {
        return student.score >= 80;
    });

    std::cout << "passed students: " << passedCount << '\n';
    for (const auto& student : students) {
        std::cout << student.name << " -> " << student.score << '\n';
    }

    return 0;
}
