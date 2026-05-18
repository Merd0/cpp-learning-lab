#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct Record {
    int id;
    std::string name;
};

std::string serialize(const Record& record) {
    return std::to_string(record.id) + "," + record.name;
}

Record parseLine(const std::string& line) {
    std::istringstream stream{line};
    std::string idText;
    std::string name;

    std::getline(stream, idText, ',');
    std::getline(stream, name);

    return Record{std::stoi(idText), name};
}

int main() {
    const std::vector<Record> records{{1, "Ada"}, {2, "Bjarne"}, {3, "Grace"}};
    const std::string fileName{"cpp_learning_lab_records.txt"};

    {
        std::ofstream output{fileName};
        if (!output) {
            std::cout << "could not open file for writing\n";
            return 1;
        }

        for (const auto& record : records) {
            output << serialize(record) << '\n';
        }
    }

    std::ifstream input{fileName};
    if (!input) {
        std::cout << "could not open file for reading\n";
        return 1;
    }

    std::string line;
    while (std::getline(input, line)) {
        const Record record = parseLine(line);
        std::cout << record.id << " -> " << record.name << '\n';
    }

    return 0;
}
