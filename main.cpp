#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

    int secretNum = 4;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
            std::cout << "Enter guess: ";
            std::cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses) {
        std::cout << "You lose would you like to try again?";
    } else {
        std::cout << "Well done!";
    }
    std::srand(std::time(0));//use the current time as seed for random generator
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: "
              << random_variable << '\n';

    return 0;
}
