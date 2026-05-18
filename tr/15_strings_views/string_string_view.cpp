#include <iostream>
#include <string>
#include <string_view>

std::string_view trimSpaces(std::string_view text) noexcept {
    while (!text.empty() && text.front() == ' ') {
        text.remove_prefix(1);
    }

    while (!text.empty() && text.back() == ' ') {
        text.remove_suffix(1);
    }

    return text;
}

bool startsWith(std::string_view text, std::string_view prefix) noexcept {
    return text.size() >= prefix.size() && text.substr(0, prefix.size()) == prefix;
}

int main() {
    const std::string command{"   upload:file.txt   "};
    const std::string_view trimmed = trimSpaces(command);

    std::cout << "trimmed: " << trimmed << '\n';
    std::cout << "upload mı: " << std::boolalpha << startsWith(trimmed, "upload:") << '\n';

    return 0;
}
