#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main() {
    const std::vector<std::string> tags{
        "cpp",
        "systems",
        "cpp",
        "oop",
        "systems",
        "templates",
    };

    std::map<std::string, int> frequencies;
    std::set<std::string> uniqueTags;

    for (const auto& tag : tags) {
        ++frequencies[tag];
        uniqueTags.insert(tag);
    }

    for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
        std::cout << it->first << " -> " << it->second << '\n';
    }

    std::cout << "unique tag sayısı: " << uniqueTags.size() << '\n';
    return 0;
}
