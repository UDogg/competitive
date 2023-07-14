#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator
    
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "Welcome to the Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

        ++tries;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed it in " << tries << " tries.\n";
            break;
        }
    }

    return 0;
}
