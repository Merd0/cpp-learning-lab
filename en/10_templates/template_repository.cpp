#include <iostream>
#include <optional>
#include <string>
#include <utility>
#include <vector>

template <typename T>
class Repository {
public:
    void add(T value) {
        items_.push_back(std::move(value));
    }

    template <typename Predicate>
    std::optional<T> findFirst(Predicate predicate) const {
        for (const auto& item : items_) {
            if (predicate(item)) {
                return item;
            }
        }
        return std::nullopt;
    }

private:
    std::vector<T> items_;
};

struct Book {
    int id;
    std::string title;
};

int main() {
    Repository<Book> books;
    books.add(Book{1, "Effective C++"});
    books.add(Book{2, "A Tour of C++"});

    const auto found = books.findFirst([](const Book& book) {
        return book.id == 2;
    });

    if (found.has_value()) {
        std::cout << found->title << '\n';
    }

    return 0;
}
