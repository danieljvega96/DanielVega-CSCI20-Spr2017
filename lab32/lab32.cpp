//Daniel Vega
//March 28, 2017
//program will calculate income tax and amount owed or to be refunded for 
//a person or couple.
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string name;
    double grossWage   = 0.0;
    double taxWithheld = 0.0;
    char   martialStatus = 'x';
    
    cout << "Enter name" << endl;
    cin  >> name;
    cout << endl;
    
    cout << "enter S if you are single and C if couple" << endl;
    cin  >> martialStatus;
    cout << endl;
    
    cout << "Enter gross wages" << endl;
    cin  >> grossWage;
    cout << endl;
    
    cout << "Enter amount of tax withheld" << endl;
    cin  >> taxWithheld;
    cout << endl;
    
    if (martialStatus){
        
    
    return 0;
}