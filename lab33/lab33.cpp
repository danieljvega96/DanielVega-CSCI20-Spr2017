//Daniel Vega
//March 30th
//Create a guessing game that reads a value between 1 and 50, tell user too high
//too low, re-enter a vallue if outside of range, or just right.
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    int randNumber = 0;
    int userGuess = 0;
    
    srand(time(0));                         // random number seed
    randNumber = ((rand() % 50) + 1);
    
    //cout << "Random number is: " << randNumber << endl;
    cout << "Guess a number between 1 and 50: "<< endl;
    cin >> userGuess;
    
    
    while ((userGuess != randNumber)) {
        cout << endl;
        
        if ((userGuess < 1) || (userGuess > 50)){
            cout << "Not between 1 and 50" << endl;
            cin >> userGuess;
        }

        else if  (userGuess < randNumber){
            cout << "Too Low, try again:" << endl;
            cin >> userGuess;
            cout << endl;
        }
        else if (userGuess > randNumber){
            cout << "Too High, try again:" << endl;
            cin >> userGuess;
            cout << endl;
    }
}

cout << "Just Right";
    return 0;
}