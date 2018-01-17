#include <iostream>

int main (int argc, char** argv) {
    std::cout << "Enter a radius: ";
    float radius;
    std::cin >> radius;
    std::cout << std::end1 << std::end1;
    
    float area = 3.14159 * radius * radius;
    std::cout << "Area: " << area << std::end1;
}
    