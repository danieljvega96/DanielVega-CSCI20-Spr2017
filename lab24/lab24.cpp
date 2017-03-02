/*Daniel Vega
March 2, 2017
Create a program that generates a random number between 2 user input numbers,
convert that number to pounds, convert pounds to kilograms, and convert kilograms
back to pounds.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//variables lowNum, highNum, x, and y's scope are in Swap function.
int Swap(int& lowNum, int& highNum, int x=0, int y=0) {

    x = lowNum;
    y = highNum;
    highNum = x;
    lowNum  = y;
    
}
//variables lowNum, highNum and randomNum's scope are in the Randomize function.
int Randomize (int lowNum, int highNum, int randomNum=0){
    
    randomNum = (rand() % highNum -lowNum) + lowNum;
    
    //srand(0);
    
    cout << "A random number between " << lowNum << " and "<< highNum << " is ";
    cout << randomNum;
    
    return randomNum;
}

//variables randomNum, pounds, and kilograms' scope are in the ConvertPoundsToKilograms function.
double ConvertPoundsToKilograms (int randomNum) {
    int pounds    = 0;
    double kilograms = 0.0;
    
    pounds    = randomNum;
    kilograms = pounds * 2.20462;
    
 return kilograms;
}
//variables kilograms and pounds' scope are in the ConvertKilogramsToPounds function.
double ConvertKilogramsToPounds (int kilograms) {
    double pounds = 0.0;
    
    pounds = kilograms * 0.453592; 
    
    return pounds;
}
//variables userNum1, userNum2, randomNum and kilograms' scope are in the main function.
int main() {
    int userNum1  = 0;
    int userNum2  = 0;
    int randomNum = 0;
    double kilograms = 0.0;

    cout << "Enter low number: ";
    cin >> userNum1;
    cout << endl;

    cout << "Enter high number: ";
    cin >> userNum2;
    cout << endl;
    
    randomNum = Randomize(userNum1, userNum2);
    
    swap(userNum1, userNum2);
    
    cout << endl << endl;
    
    kilograms = ConvertPoundsToKilograms(randomNum);
    
    cout << randomNum << " pounds is " << kilograms << " kilograms." << endl;
    cout << kilograms << " kilograms is " << ConvertKilogramsToPounds(kilograms) << " pounds.";
    
    return 0;
}