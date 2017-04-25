//Daniel Vega
//April 25th
//Create usernames for a website WITHOUT cstring
#include <iostream>
#include <string>

using namespace std;

int main(){
    
//initialized variables
    string firstName;
    string lastName;
    string userName1;
    string userName2;
    string userName3;
    
//loop incase user enters the same string for both first and last name
    while (firstName == lastName){
    
//Enter first name
    cout << "Please enter your first name (note, cannot be over 10 characters): " << endl;
    cin >> firstName;
    cout << endl;
    
//Specify first name is < 10
    while (firstName.length() > 10){
        cout << "over 10 characters, try again:" << endl;
        cin >> firstName;
        cout << endl;
    }
    
//Enter last name
    cout << "Please enter last name (note, cannot be over 20 characters or the same as first name): " << endl;
    cin >> lastName;
    cout << endl;
    
//Specify last name is < 20
    while (lastName.length() > 20){
        cout << "over 20 characters, try again:" << endl;
        cin >> lastName;
        cout << endl;
    }
    
//If first name and last name are the same, send warning message to user
    if (firstName == lastName){
        cout << "Warning, first name and last name given were the same." << endl << endl;
    }
}
    
//create three different user names
    cout << "Name: " << firstName << " " << lastName << endl << endl;
    
    cout << "Which of the three user names would you like: " << endl << endl;
    
    cout << firstName << lastName << endl;
    cout << firstName[0] << lastName << endl;
    cout << firstName << lastName[0] << endl;
    
    return 0;
}