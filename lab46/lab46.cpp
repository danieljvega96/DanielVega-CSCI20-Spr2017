//Daniel Vega
//April 27th
//Write a program that will read a student's grades and output an HTML page
//to output a student's transcript including semester GPA and overall GPA
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
   string line;
   ifstream fin;
   ofstream fout;
   string studentName;
   int semesters;
   int units;
   string grade;
   
   fin.open("lab46.html");
   fout.open("lab46.html");

   while(!fin.eof())
   {
      getline(fin, line);
      fout<<line<<endl;
   }
    
    cout << "Please enter your name:" << endl;
    getline(cin, studentName);
    cout << endl << endl;
    
    cout << "How many semesters have you completed:" << endl;
    cin >> semesters;
    cout << endl << endl;
    
    
   fin.close();
   fout.close();
    
    
    
    
    return 0;
}