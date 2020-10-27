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
            std::cout << "Guess a number between 1 and 10: "; //player to select a number, maximum guesses:3
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

    return 0;

    
}
