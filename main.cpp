#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

    int secretNum = 4;
    int guess;

    while(secretNum != guess){
    std::cout << "Enter guess: ";
    std::cin >> guess;
    }

    std::srand(std::time(0));//use the current time as seed for random generator
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: "
              << random_variable << '\n';

    return 0;
}
