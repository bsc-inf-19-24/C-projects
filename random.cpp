#include <iostream>
#include <random>
using namespace std;

int main() {
    // Create a random number generator
    std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator

    // Define the range for the random numbers
    std::uniform_int_distribution<> dis(0, 11); // Range: 0 to 10

    // Generate and print 10 random numbers
    std::cout << "dayuntilexpirartion:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << dis(gen) << " ";
    }
    std::cout << std::endl;

    return 0;
}