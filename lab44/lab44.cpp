//Daniel  Vega
//April 20th
//Create usernames for a website
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char firstName[10];
    char lastName[20];
    char userName1[30];
    char userName2[30];
    char userName3[30];
    
    cout << "Please enter your first name: " << endl;
    cin >> firstName;
    while (strlen(firstName) > 10){
        cout << "Over 10 characters, try again: "<< endl;
        cin >> firstName;
    }
    cout << endl;
    
    cout << "Please enter your last name: " << endl;
    cin >> lastName;
     while (strlen(lastName) > 20){
        cout << "Over 20 characters, try again: "<< endl;
        cin >> lastName;
    }
    cout << endl;
    
    if (strcmp(firstName, lastName) == 0) {
        cout << "Warning, user first name and last name are same." << endl << endl;
    }
    
    cout << "Name: " << firstName << " " << lastName << endl << endl;
    
    cout << "Which of the three user names would you like:" << endl << endl;
    
    cout << strcat(firstName,lastName) << endl;
    
    cout << strncat(lastName,firstName,1) << endl;
    
    cout << strncat(lastName,firstName,2) << endl;
    return 0;
}