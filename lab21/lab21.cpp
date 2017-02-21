//Daniel Vega
// February 21, 2017
//This program will calculate and output Old wind style, New wind style, temperature, and difference between the old and new wind styles based off of user input of temperature in Fahrenhiet and wind velocity
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    //temp is in Fahrenhiet
    double temperature = 0;
    double windVelocity = 0;
    double oldStyleWindChill = 0;
    double newStyleWindChill = 0;
    
    cout << "Input temperature in Fahrenhiet: " << endl;
    cin >> temperature;
    cout << endl;
    
    cout << "Input wind speed (velocity): " << endl;
    cin >> windVelocity;
    cout << endl;
    
    //0.081 (3.71 sqrt(velocity) + 5.81 - 0.25 * velocity)(temp - 91.4) + 91.4
    oldStyleWindChill = (0.081 * (3.71 * sqrt(windVelocity) + 5.81 - (0.25 * windVelocity))) * (temperature - 91.4) + 91.4;
    
    //35.74 + 0.6215 * temp - 35.75(velocity^0.16) + 1.4275 * temp * (velocity^0.16)
    newStyleWindChill = 35.74 + (0.6215 * temperature) - 35.75 * pow(windVelocity, 0.16) + 0.4275 * temperature * pow(windVelocity, 0.16);
    
    cout << "With a wind speed of " << windVelocity << "mph:" << endl << endl;
    cout << "Old Wind Style Chill is " << oldStyleWindChill << endl << endl;
    cout << "New Wind Style Chill is " << newStyleWindChill << endl << endl;
    cout << "The difference between New Wind Style from Old Wind Style is " << abs(newStyleWindChill - oldStyleWindChill);
    
}