#include <iostream>
#include <memory>
int* f() {
    return new int(17);
}
std::unique_ptr<int> g() {
    return std::make_unique<int>(19);
}
int main() {
    std::cout << g() << std::endl;
    std::cout << f() << std::endl;
    return 0;
}
