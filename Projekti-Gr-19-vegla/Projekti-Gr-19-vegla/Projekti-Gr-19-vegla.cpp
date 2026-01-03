// Projekti-Gr-19-vegla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>  // për rand()
#include <ctime>    // për time()

using namespace std;

int main() {
    srand(time(0)); // inicializojmë seed-in për numrin random
    int secretNumber = rand() % 100 + 1; // numër nga 1-100
    int guess;
    int attempts = 0;
    bool guessed = false;

    cout << "Miresevini ne lojen 'Guess the Number'!\n";
    while (!guessed) {
        cout << "Shkruaj numrin tuaj: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Urime! E gjetet numrin ne " << attempts << " tentime.\n";
            guessed = true;
        }
        else if (guess > secretNumber) {
            cout << "Shume i larte. Provoni perseri.\n";
        }
        else {
            cout << "Shume i ulet. Provoni perseri.\n";
        }
    }

    cout << "Fundi i lojes.\n";
    return 0;
}