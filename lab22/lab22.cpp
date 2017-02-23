//Daniel Vega
//February 23rd, 2017
//Program to generate random number between 1 and 100 and output that number
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function for random number
void RandomNumber()
{
    
    int randomNum = 0;
    
    //generate random number between 1 amd 100
    srand(time(0));
    randomNum = (rand() % 100) + 1;
    
    //display random number generated
    cout << "Your random number is " << randomNum;

}

int main() {
    
    //call random number function
    RandomNumber();
    
    return 0;
}