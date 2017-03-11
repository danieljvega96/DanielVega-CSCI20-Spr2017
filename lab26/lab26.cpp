//Daniel Vega
//March 9th 2017
//Make a program with a class that converters temp between Kelvin, Fahrenhiet and Celsius.
#include <iostream>
//#include "lab9.cpp"
using namespace std;

class TemperatureConverter {
    public:
        void SetTempFromKelvin(double tempKelvin);
        double GetTempFromKelvin();
        void SetTempFromCelsius(double tempCelsius);
        void SetTempFromFahrenheit(double tempFahrenheit);
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        double PrintTemperature();
        TemperatureConverter();
        TemperatureConverter(double tempKelvin);
               
    private:
        double kelvin_ ;
};

//Default constructor
TemperatureConverter::TemperatureConverter() {
    kelvin_ = 0;
}

//second constructor
TemperatureConverter::TemperatureConverter(double tempKelvin) {
    kelvin_= tempKelvin;
}

//Accepts and stores a kelvin value
void TemperatureConverter::SetTempFromKelvin(double tempKelvin) {
    kelvin_= tempKelvin;
}

//Returns kelvin value
double TemperatureConverter::GetTempFromKelvin() {
    return kelvin_;
}

//Accepts a celsius value and converts it to kelvin
void TemperatureConverter::SetTempFromCelsius(double tempCelsius) {
    kelvin_ = tempCelsius;
}

//Accepts a fahrenheit value and converts it to kelvin
void TemperatureConverter::SetTempFromFahrenheit(double tempFahrenheit) {
    kelvin_ = (5 * (tempFahrenheit - 32)/9) + 273.15;
}

//Returns the celsius temp 
double TemperatureConverter::GetTempAsCelsius() {
    return kelvin_ - 273.15;
}

//Returns the Fahrenheit temp
double TemperatureConverter::GetTempAsFahrenheit() {
    return ((GetTempAsCelsius() * 9)/5 +32);
}

double TemperatureConverter::PrintTemperature(){
    cout << "Kelvin: " << GetTempFromKelvin() << endl;
    cout << "Celsius: " << GetTempAsCelsius() << endl;
    cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
    cout << endl;
}

int main() {
    
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperature();
    temp2.PrintTemperature();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperature();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperature();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperature();
    
    return 0;
}