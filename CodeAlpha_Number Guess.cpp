#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator
    std::srand(std::time(0));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int guess; // Variable to store the user's guess
    int attempts = 0; // Counter for the number of attempts
    
    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    // Main game loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++; // Increment the attempts counter
        
        // Check the player's guess and provide hints
        if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }
    } while (guess != randomNumber); // Repeat until the correct number is guessed

    return 0;
}
