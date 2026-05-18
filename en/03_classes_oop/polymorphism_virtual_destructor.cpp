#include <iostream>
#include <memory>
#include <vector>

class Shape {
public:
    virtual ~Shape() = default;

    virtual double area() const = 0;
    virtual void print() const = 0;
};

class Circle final : public Shape {
public:
    explicit Circle(double radius) : radius_{radius} {}

    double area() const override {
        constexpr double pi = 3.14159265358979323846;
        return pi * radius_ * radius_;
    }

    void print() const override {
        std::cout << "circle area: " << area() << '\n';
    }

private:
    double radius_;
};

class Rectangle final : public Shape {
public:
    Rectangle(double width, double height) : width_{width}, height_{height} {}

    double area() const override {
        return width_ * height_;
    }

    void print() const override {
        std::cout << "rectangle area: " << area() << '\n';
    }

private:
    double width_;
    double height_;
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(3.0));
    shapes.push_back(std::make_unique<Rectangle>(4.0, 5.0));

    for (const auto& shape : shapes) {
        shape->print();
    }

    return 0;
}
