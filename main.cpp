#include <iostream>
#include <memory>
#include <string>

class Base {
public:
    virtual void foo() = 0;
};
class Child1 : public Base {
public:
    void foo() override { 
        std::cout << "Child 1" << std::endl;
    }
};
class Child2 : public Base {
public:
    void foo() override { 
        std::cout << "Child 2" << std::endl; 
    }
};

int main() {
    std::unique_ptr<Base> test;

    int selector;

    std::cin >> selector;

    switch (selector) {
    case 1:
        test = std::make_unique<Child1>();
        break;
    case 2:
        test = std::make_unique<Child2>();
        break;
    }

    test->foo();

    return 0;
}
