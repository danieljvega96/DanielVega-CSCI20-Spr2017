//Daniel Vega
//February 28, 2017
//create a program with 2 functions, one creates random number generator
//The other accepts 2 values and swaps them
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Swap(int& lowNum, int& highNum, int x=0, int y=0) {

    x = lowNum;
    y = highNum;
    highNum = x;
    lowNum  = y;
    
}

int Randomize (int& lowNum, int& highNum, int randomNum=0){
    
    randomNum = (rand() % highNum -lowNum) + lowNum;
    
    srand(0);
    
    cout << "A random number between " << lowNum << " and "<< highNum << " is ";
    cout << randomNum;
    
    return randomNum;
}

int main() {
    int userNum1 = 0;
    int userNum2 = 0;

    cout << "Enter low number: ";
    cin >> userNum1;
    cout << endl;

    cout << "Enter high number: ";
    cin >> userNum2;
    cout << endl;
    
    Randomize(userNum1, userNum2);
    
    swap(userNum1, userNum2);
    
    return 0;
}