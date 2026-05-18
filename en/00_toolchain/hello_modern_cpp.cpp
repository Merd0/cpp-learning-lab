#include <iostream>
#include <string>
#include <vector>

int main() {
    const std::string language{"C++"};
    const std::vector<std::string> goals{
        "modern syntax",
        "resource safety",
        "systems mindset",
    };

    std::cout << "Welcome to " << language << " learning lab\n";

    for (const auto& goal : goals) {
        std::cout << "- " << goal << '\n';
    }

    return 0;
}
