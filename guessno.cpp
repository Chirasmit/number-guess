#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int randNo = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it.\n";

    //while (true) 
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randNo) {
            cout << "Sorry!!..Too high! Try again and the correct number is "<<randNo<<endl; 
        } else if (guess < randNo) {
            cout << "Sorry!!..Too low! Try again and the correct number is "<<randNo<<endl;
        } else {
            cout << "Congratulations! You guessed it right in ";
        }
    }

    return 0;
}
