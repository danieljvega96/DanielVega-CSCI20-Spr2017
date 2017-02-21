//Daniel Vega
//February 9, 2017
//Making a madlib
#include <iostream>
#include <string>

    using namespace std;

int main () {
    string verb;
    string person;
    string location;
    string food;
    string animal;
    
    //user enters verb
    cout << "Enter a verb ending in 'ing':" << endl;
    getline(cin, verb);
    
    //user enters person
    cout << "Enter a person:" << endl;
    getline(cin, person);
    
    cout << "Enter a location:" << endl;
    getline(cin, location);
    
    cout << "Enter a food:" << endl;
    getline(cin, food);
    
    cout << "Enter an animal:" << endl;
    getline(cin, animal);
    
    cout << " I had a dream I was " << verb << " with " << person << " at " << location << ".";
    cout << " We were eating " << food << " and a/an " << animal << " attacked us out of nowhere!";
    cout << " We started " << verb << " as fast as we could to get away from the " << animal << ".";
    cout << " After " << person << " and I got away, we realized we forgot our " << food << " at " << location << ".";
    cout << " When I woke up, I had an existential crisis and wondered what it meant to be truly 'consious'.";
}