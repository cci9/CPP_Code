
#include <iostream>
#include <utility> // For std::forward

void process(int &x) {
    std::cout << "Lvalue reference" << std::endl;
    std::cout << &x << std::endl;
}

void process(int &&x) {
    std::cout << "Rvalue reference" << std::endl;
    std::cout << x << std::endl;
}

template <typename T>
void forward_correct(T &&t) {
    process(std::forward<T>(t));  // Correctly forwards lvalue or rvalue
}
template <typename T>
void forward_incorrect(T &&t) {
    process(t);  // Incorrectly forwards lvalue or rvalue
                                    // Always calls process(int&)
}

int main() {
    int a = 10;
    // forward_incorrect(a);   // Outputs: Lvalue reference
    // forward_incorrect(10);  // Outputs: Rvalue reference
    process(a);   // Outputs: Lvalue reference
    forward_correct(a);   // Outputs: Lvalue reference
    process(10);   // Outputs: Lvalue reference
    forward_correct(10);  // Outputs: Rvalue reference
    return 0;
}

