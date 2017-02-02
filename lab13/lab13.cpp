/*Daniel Vega
February 2 2017*/
#include <iostream>
using namespace std;

int main()
{
    int secondsPerOneBirth = 8;
    int birthPerYear = 0;
    int secondsPerOneDeath = 11;
    int deathPerYear = 0;
    int secondsPerOneImmigrant = 29;
    int immigrantPerYear = 0;
    int secondsPerOneNetGainPerson = 15;
    int netGainPeoplePerYear = 0;
    int yearsInTheFuture = 0;
    int popInTheFuture = 0;
    int secPerMonth = 2628000;
    int currentPop = 324472917;
    int popGainedPerYear = 0;
    
    cout << "How many years in the future would you like to predict?";
    cout << endl;
    cin >> yearsInTheFuture;
    cout << endl;
    
    //Births per year
    birthPerYear = (secPerMonth * 12)/secondsPerOneBirth;
    
    //deaths per year
    deathPerYear = (secPerMonth *12) /secondsPerOneDeath;
    
    //immigrants per year
    immigrantPerYear = (secPerMonth *12) /secondsPerOneImmigrant;
    
    //Net gain People per year
    netGainPeoplePerYear = (secondsPerOneNetGainPerson * secPerMonth) *12;
    
    //population per year
    popGainedPerYear = birthPerYear - deathPerYear + immigrantPerYear;
    
    //popInTheFuture
    popInTheFuture = (popGainedPerYear * yearsInTheFuture) + currentPop;
    
    cout << "At a rate of " << popGainedPerYear << " people per year,";
    cout << endl;
    
    cout<< "In the year " << yearsInTheFuture + 2017 << " There will be " << popInTheFuture << ".";
}