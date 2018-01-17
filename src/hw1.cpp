#include <iostream>

int main () {
    std::cout << "> Enter a radius: ";
    float radius;
    std::cin >> radius;
    
    float area = 3.14159 * radius * radius;
    float circumference = 2 * 3.14159 * radius;

    std::cout << "> Area: " << area << std::endl;
    std::cout << "> Circumference: " << circumference << std::endl;

    return 0;
}
    