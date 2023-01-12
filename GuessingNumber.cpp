#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int guess, randomNumber;
    srand(time(0));
    randomNumber = rand() % 100 + 1;
    std::cout << "Welcome to the number guessing game!\n";
    std::cout << "Guess a number between 1 and 100: ";
    while (std::cin >> guess)
    {
        if (guess == randomNumber)
        {
            std::cout << "Congratulations! You guessed the right number!\n";
            break;
        }
        else if (guess < randomNumber)
        {
            std::cout << "Too low! Guess again: ";
        }
        else
        {
            std::cout << "Too high! Guess again: ";
        }
    }
    return 0;
}
