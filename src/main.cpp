#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Super Sandisk CLI v1.0" << std::endl;
    
    if (argc > 1) {
        std::cout << "Arguments provided: " << std::endl;
        for (int i = 1; i < argc; ++i) {
            std::cout << "  " << i << ": " << argv[i] << std::endl;
        }
    } else {
        std::cout << "Usage: " << argv[0] << " [options]" << std::endl;
        std::cout << "A simple CLI application built with CMake" << std::endl;
    }
    
    return 0;
}
