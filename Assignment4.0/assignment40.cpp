//Daniel Vega
//May 2nd
//create a program to read in student's answers for a test and compare the
//answers to an answer key. 1 point for each correct answer, 0 for omitted,
//and 1/4 deducted for an incorrect answer. Program sould ouput to the screen
//student's name, list of missed questions, and overall grade on exam.
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    //defining both flie in and file out
    ifstream inFS;
    ofstream outFS;
    
    string firstName;
    string lastName;
    string answerKey;
    
    //answerkey free response
    string ansKey19;
    string ansKey20;
    string ansKey21;
    
    string studentAnswer;
    
    //student free response
    string studentQuestion19;
    string studentQuestion20;
    string studentQuestion21;
    double score;
    
    
//open StudentAnswers.txt as an input file to pull information from
inFS.open("StudentAnswers.txt");
    
    //if failed to open, output "could not open file StudentAnswerkey.txt"
    if (!inFS.is_open()) {
        cout << "Could not open file StudentAnswerkey.txt" << endl;
        return 1;
    }
    
    //pull out the first and last name of the student
    inFS >> firstName;
    inFS >> lastName;
    
    //pull out multiple choice and true/false from student's test as a string
    inFS >> studentAnswer;
    
    //pull out free response questions 19, 20, and 21 from student's answers
    inFS >> studentQuestion19;
    inFS >> studentQuestion20;
    inFS >> studentQuestion21;
    
//done pulling values from StudentAnswers.txt, so close file
inFS.close();
    
    
//open AnswerKey.txt as an input file to pull info from
inFS.open("AnswerKey.txt");
    
    //if failed to open, output "could not open file AnswerKey.txt"
    if (!inFS.is_open()) {
        cout << "Could not open file StudentAnswerkey.txt" << endl;
        return 1;
    }
    
    //pull out multiple choice and true/false from answer key as a string
    inFS >> answerKey;
    
    //pull out free response questions 19, 20, and 21 from answer key
    inFS >> ansKey19;
    inFS >> ansKey20;
    inFS >> ansKey21;
    
//done pulling values from AnswerKey.txt, so close file
inFS.close();
    
    
//open Final.txt as an output to create page for student's name, score, and missed questions
outFS.open("Final.txt");
    
    //if failed to open, output "could not open file Final.txt"
    if (!outFS.is_open()) {
        cout << "Could not open file Final.txt" << endl;
        return 1;
    }
    
    //display results to sreen
    cout << firstName << " " << lastName << ":" << endl << endl;
    
    //display results to Final.txt
    outFS << firstName << " " << lastName << ":" << endl << endl;
    
//need a loop to get from question 1-18
int i = 0;
while (i < 18){
    
    //compare student answers to answer key for multiple choice and True/false
    //if correct, add one point to score
    if (answerKey[i] == studentAnswer[i]) {
        score = score + 1;
        i++;
    }
    
    //if omitted '?', display and add no points
    else if (studentAnswer[i] == '?') {
            i++;
            cout << "Question " << i << " was omitted" << endl;
            outFS << "Question " << i << " was omitted" << endl;
    }
    
    //if incorrect, display question number and add .75 points to score
    else {
        score = score + 0.75;
        i++;
        cout << "Question " << i << " is incorrect" << endl;
        outFS << "Question " << i << " is incorrect" << endl;
    }
}


//question 19
//if correct, add one point to score
if ((studentQuestion19 == ansKey19)||
    (studentQuestion19 == "var")) {
        score = score + 1;
    }
    
    //if omitted '?', display and add no points
    else if (studentQuestion19 == "?"){
        cout << "question 19 was omitted" << endl;
        outFS << "question 19 was omitted" << endl;
    }
   
    //if incorrect, display question number and add .75 points to score
    else {
        cout << "question 19 is incorrect" << endl;
        outFS << "question 19 is incorrect" << endl;
        score = score + 0.75;
    }

//question 20
//if correct, add one point to score
if  ((studentQuestion20 == ansKey20) || 
    (studentQuestion20 == "rand()")){
        score = score + 1;
    }
    
    //if omitted '?', display and add no points
    else if (studentQuestion20 == "?"){
        cout << "question 20 was omitted" << endl;
        outFS << "question 20 was omitted" << endl;
    }
   
    //if incorrect, display question number and add .75 points to score
    else {
        cout << "question 20 is incorrect" << endl;
        outFS << "question 20 is incorrect" << endl;
        score = score + 0.75;
    }
    
//question 21
//if correct, add one point to score
if (studentQuestion21 == ansKey21){
        score = score + 1;
    }
    
    //if omitted '?', display and add no points
    else if (studentQuestion21 == "?"){
        cout << "question 21 was omitted" << endl;
        outFS << "question 21 was omitted" << endl;
    }
   
    //if incorrect, display question number and add .75 points to score
    else {
        cout << "question 21 is incorrect" << endl;
        outFS << "question 21 is incorrect" << endl;
        score = score + 0.75;
    }

    score = (score/21) * 100;
    
    //display final grade
    cout << endl;
    cout << firstName << " " << lastName << "'s grade on this exam is ";
    cout << fixed << setprecision(2) << score << "%";
    
    outFS << endl;
    outFS << firstName << " " << lastName << "'s grade on this exam is ";
    outFS << fixed << setprecision(2) << score << "%";
    
outFS.close();
    
    return 0;
}