/*
Lesson 4.2 Samples
Pawelski
3/31/2021
The samples below demonstrate how to use do while loops.
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    // Example 1
    int i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);
    cout << "\n";

    // Example 2
    int j = 5;
    do
    {
        cout << j << "\n";
        j++;
    } while (j < 5);
    cout << "\n";

    // Both examples below make a small guessing name.
    // The first uses a while loop, while the second uses 
    // a do while loop.
    // Example 3
    string option = "Play";
    srand(time(0));
    while (option != "Exit" && option != "exit")
    {
        int secret = rand() % 100 + 1;
        cout << secret << "\n";
        int playerGuess = -1;
        cout << "I'm thinking of a number between 1 and 100.\n";
        while (playerGuess != secret)
        {
            cout << "Guess my secret number: ";
            cin >> playerGuess;
            if (playerGuess < secret)
            {
                cout << "Too low! Try again...\n";
            }
            else if (playerGuess > secret)
            {
                cout << "Too high! Try again...\n";
            }
        }
        cout << "You guessed my number!\n";
        cout << "Would you like to play again or exit? (Play/Exit) ";
        cin >> option;
    }
    cout << "\n";

    // Example 4
    string selectedOption;
    srand(time(0));
    do 
    {
        int secretNumber = rand() % 100 + 1;
        cout << secretNumber << "\n";
        int guess;
        cout << "I'm thinking of a number between 1 and 100.\n";
        do
        {
            cout << "Guess my secret number: ";
            cin >> guess;
            if (guess < secretNumber)
            {
                cout << "Too low! Try again...\n";
            }
            else if (guess > secretNumber)
            {
                cout << "Too high! Try again...\n";
            }
        } while (guess != secretNumber);
        cout << "You guessed my number!\n";
        cout << "Would you like to play again or exit? (Play/Exit) ";
        cin >> selectedOption;
    } while (selectedOption != "Exit" && selectedOption != "exit");
    return 0;
}
