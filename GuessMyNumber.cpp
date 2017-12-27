// Min Jun Kim, Section 3
#include <iostream>
#include <cstdlib>
#include <ctime> //streams files from iostream, cstdlib, ctime

using std::cout;
using std::cin;
using std::endl; //uses cout,cin,endl from std.

int main() //main function
{
    bool X=true; //if the statement is true
    while (X)
    {
    srand(time(0));
    int number;
    number = rand() % 1000 + 1; //random number between 1-1000 is being generated
    int guess;
    char answer; //Answer is stored.
    do {
        cout << "\nI have a number between 1 and 1000. \nCan you guess my number? \nPlease type your first guess.\n"; //What the prompt will show.
        cin >> guess;
        if (guess < number) //if the guess number is lower.
            cout << "Too low. Try again.\n";
        else if (guess > number) //if the guess number is higher.
            cout << "Too high. Try agian.\n";
        else //if the guessed number matches the generated number.
            cout << "Excellent! You guessed the number!" << endl;
    } while (number != guess); //does the while loop until number == guess.

cout << "Would you like to play again? Enter Y/N:  ";
cin >> answer;
if(answer != 'y' && answer != 'Y') //Loops the game again, if user wants to play.
{
    X=false; //If the user says no, system quits.
    cout << "Thanks for playing. Goodbye.\n" << endl;
}}
    system("PAUSE");
    return 0; //return 0 to verify the program works.
}