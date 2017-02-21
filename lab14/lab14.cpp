//Creator is Daniel J Vega
//February 7th 2017
#include <iostream>
using namespace std;

int main () {
    
    int quarters     = 0;
    int dimes        = 0;
    int nickels      = 0;
    int pennies      = 0;
    int moneyEntered = 0;
    double fee       = .109;
    double moneyReturned = 0;
    
    cout << "Enter how much change you have: " << endl;
    cin >> moneyEntered;
    
    //find how many quarters there are
    quarters = moneyEntered/25 ;
    
    //find how many dimes there are
    dimes = (moneyEntered%25)/10;
    
    //find how many nickels there are
    nickels = ((moneyEntered%25)%10)/5;
    
    //find how many pennies there are
    pennies = (((moneyEntered%25)%10)%5);
    
    //calculate fee
    fee = (moneyEntered * fee);
    
    //calculate money returned
    moneyReturned = moneyEntered-fee;
    
    //convert money returned and fee
    /*fee /=100;
    moneyReturned /=100;*/
    
    cout << "You have "<< quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;
    cout << "After a fee of $" << fee << " You will recieve $" << moneyReturned << ".";
    
}