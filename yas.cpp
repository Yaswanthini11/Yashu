#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

  
    int rm = std::rand() % 100 + 1;

    int user_guess;
    bool guess = false;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100." << std::endl;

    
    while (!guess) {
        std::cout << "Please enter your guess: ";
        std::cin >> user_guess;

        if (user_guess < rm) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (user_guess > rm) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            guess = true;
            std::cout << "Congratulations! You guessed the correct number: " << rm << std::endl;
        }
    }

    return 0;
}

